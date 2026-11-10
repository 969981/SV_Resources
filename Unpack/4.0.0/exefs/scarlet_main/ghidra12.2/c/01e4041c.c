/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e4041c; name: FUN_01e4041c
 */


void FUN_01e4041c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != param_1) {
    lVar7 = *param_3;
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      *(undefined4 *)(lVar7 + -0x78) = *(undefined4 *)(lVar1 + -0x78);
      uVar4 = *(undefined8 *)(lVar1 + -0x70);
      uVar5 = *(undefined8 *)(lVar1 + -0x60);
      *(undefined8 *)(lVar7 + -0x68) = *(undefined8 *)(lVar1 + -0x68);
      *(undefined8 *)(lVar7 + -0x60) = uVar5;
      *(undefined8 *)(lVar7 + -0x70) = uVar4;
      uVar4 = *(undefined8 *)(lVar1 + -0x58);
      uVar5 = *(undefined8 *)(lVar1 + -0x48);
      *(undefined8 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar1 + -0x60) = 0;
      *(undefined8 *)(lVar1 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x50) = *(undefined8 *)(lVar1 + -0x50);
      *(undefined8 *)(lVar7 + -0x48) = uVar5;
      *(undefined8 *)(lVar7 + -0x58) = uVar4;
      uVar4 = *(undefined8 *)(lVar1 + -0x40);
      uVar2 = *(undefined8 *)(lVar1 + -0x38);
      *(undefined8 *)(lVar1 + -0x58) = 0;
      uVar5 = *(undefined8 *)(lVar1 + -0x30);
      uVar3 = *(undefined8 *)(lVar1 + -0x28);
      *(undefined8 *)(lVar1 + -0x50) = 0;
      *(undefined8 *)(lVar1 + -0x48) = 0;
      *(undefined1 *)(lVar7 + -0x20) = 0;
      *(undefined8 *)(lVar7 + -0x30) = uVar5;
      *(undefined8 *)(lVar7 + -0x28) = uVar3;
      *(undefined8 *)(lVar7 + -0x40) = uVar4;
      *(undefined8 *)(lVar7 + -0x38) = uVar2;
      if (*(char *)(lVar1 + -0x20) != '\0') {
        std::locale::locale((locale *)(lVar7 + -0x18),(locale *)(lVar1 + -0x18));
        *(undefined1 *)(lVar7 + -0x20) = 1;
      }
      uVar4 = *(undefined8 *)(lVar1 + -0x10);
      lVar6 = lVar6 + -0x78;
      *(undefined4 *)(lVar7 + -8) = *(undefined4 *)(lVar1 + -8);
      *(undefined8 *)(lVar7 + -0x10) = uVar4;
      lVar7 = *param_3 + -0x78;
      *param_3 = lVar7;
    } while (param_1 - param_2 != lVar6);
  }
  return;
}


