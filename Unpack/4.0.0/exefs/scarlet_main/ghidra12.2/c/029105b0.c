/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029105b0; name: FUN_029105b0
 */


void FUN_029105b0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x9c) == 0x289) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xe6e390c318fe758e
                      );
    if ((uVar1 & 1) != 0) {
LAB_0291062c:
      uVar2 = 0xe;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xa091b74ad8712f45
                      );
    if ((uVar1 & 1) != 0) {
LAB_029106a0:
      uVar2 = 0xc;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xa7b92398a539a2fc
                      );
    if ((uVar1 & 1) != 0) {
LAB_02910700:
      uVar2 = 9;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xa12054e1dc6c6afa
                      );
    uVar2 = 10;
  }
  else {
    if (*(short *)(param_1 + 0x9c) != 0x1ed) {
      uVar2 = 0;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x851c73f7bfcb30ee
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xae69bb344ebeed15
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 5;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x42937c973ab77015
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 0xd;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xeb2c7250ae3e992d
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 1;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x25fb1ca9b6a72a96
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 0xb;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xf7d438d2f6657635
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 7;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x177a31be5b7a8f19
                      );
    if ((uVar1 & 1) != 0) goto LAB_0291062c;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x5d71cb1c244c7715
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 4;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xa49efd7e87b3c268
                      );
    if ((uVar1 & 1) != 0) goto LAB_029106a0;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x513601c0609999f5
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 3;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x458177b731cc1099
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 0xf;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1901896b0640f818
                      );
    if (((uVar1 & 1) != 0) ||
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           0x1af162a1ff017e43), (uVar1 & 1) != 0)) {
      uVar2 = 8;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x69ff8364bdef0be6
                      );
    if ((uVar1 & 1) != 0) goto LAB_02910700;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x3e25d433db87d9e6
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 10;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xa4b30222f5cb066c
                      );
    if ((uVar1 & 1) != 0) {
      uVar2 = 6;
      goto LAB_02910638;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x4f8d0509fbd0d88e
                      );
    uVar2 = 0x11;
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
LAB_02910638:
  FUN_02914fb8(param_1,uVar2);
  return;
}


