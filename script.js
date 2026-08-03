document.addEventListener("DOMContentLoaded", () => {
    
    // --- 1. CERTIFICATE MODAL FEATURE ---
    const modal = document.getElementById("cert-modal");
    const modalImg = document.getElementById("modal-img");
    const modalTitle = document.getElementById("modal-title");
    const closeModalBtn = document.getElementById("close-modal");
    const certCards = document.querySelectorAll(".cert-card");

    certCards.forEach(card => {
        card.addEventListener("click", () => {
            const certSrc = card.getAttribute("data-cert");
            const certTitle = card.getAttribute("data-title");

            modalImg.src = certSrc;
            modalTitle.textContent = certTitle;
            modal.classList.add("show");
        });
    });

    closeModalBtn.addEventListener("click", () => {
        modal.classList.remove("show");
    });

    window.addEventListener("click", (e) => {
        if (e.target === modal) {
            modal.classList.remove("show");
        }
    });

    // --- 2. DOWNLOAD RESUME NOTIFICATION ---
    const resumeBtn = document.getElementById("download-resume-btn");
    resumeBtn.addEventListener("click", () => {
        console.log("Resume download initiated.");
    });

    // --- 3. SCROLL REVEAL ANIMATIONS ---
    const revealElements = document.querySelectorAll(".scroll-reveal");

    const revealOnScroll = () => {
        const windowHeight = window.innerHeight;
        const revealPoint = 100;

        revealElements.forEach(element => {
            const elementTop = element.getBoundingClientRect().top;
            if (elementTop < windowHeight - revealPoint) {
                element.classList.add("active");
            }
        });
    };

    window.addEventListener("scroll", revealOnScroll);
    revealOnScroll(); // Trigger once on load
});