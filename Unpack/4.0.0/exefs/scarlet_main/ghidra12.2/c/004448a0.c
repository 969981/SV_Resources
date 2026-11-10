/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004448a0; name: FUN_004448a0
 */


bool FUN_004448a0(uint param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 local_a8 [80];
  undefined8 local_58;
  
  if (*param_3 == 0) {
    return true;
  }
  if (0xf < param_1) {
    uVar6 = 0x71;
    uVar8 = 0x37;
    uVar7 = 7;
    goto LAB_00444974;
  }
  iVar2 = FUN_0047e650(&DAT_047f1858,FUN_00444e80);
  if ((iVar2 == 0) || (DAT_047f185c == 0)) {
    uVar6 = 0x71;
    uVar7 = 0x41;
    uVar8 = 0x3c;
    goto LAB_00444974;
  }
  if (DAT_047f1860 == 0) {
    return false;
  }
  FUN_0047e5e0();
  uVar3 = FUN_0047e430(*(undefined8 *)(&DAT_047f1868 + (ulong)param_1 * 8));
  uVar4 = FUN_0047e430(*param_3);
  if ((int)uVar3 <= (int)uVar4) {
    uVar4 = uVar3;
  }
  if ((int)uVar4 < 1) {
    puVar5 = (undefined1 *)0x0;
LAB_004449d4:
    FUN_0047e600(DAT_047f1860);
    if (uVar4 == 0) {
      return true;
    }
    if (puVar5 != (undefined1 *)0x0) {
      if ((*param_2 == 0) || (iVar2 = FUN_0047e430(), iVar2 < (int)uVar4)) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0047e450(*param_2,uVar4 - 1);
      }
      iVar2 = FUN_00444b40(param_2,uVar4 - 1,uVar6);
      bVar1 = iVar2 != 0;
      if ((iVar2 != 0) && (0 < (int)uVar4)) {
        uVar10 = 0;
        do {
          if ((*param_3 == 0) || (iVar2 = FUN_0047e430(), (long)iVar2 <= (long)uVar10)) {
            local_58 = 0;
            puVar9 = *(undefined8 **)(puVar5 + uVar10 * 8);
          }
          else {
            local_58 = FUN_0047e450(*param_3,uVar10 & 0xffffffff);
            puVar9 = *(undefined8 **)(puVar5 + uVar10 * 8);
          }
          if (((puVar9 != (undefined8 *)0x0) && ((code *)puVar9[4] != (code *)0x0)) &&
             (iVar2 = (*(code *)puVar9[4])
                                (param_2,param_3,&local_58,uVar10 & 0xffffffff,*puVar9,puVar9[1]),
             iVar2 == 0)) {
            bVar1 = false;
            goto LAB_00444b18;
          }
          FUN_00444b40(param_2,uVar10 & 0xffffffff,local_58);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
        bVar1 = true;
      }
LAB_00444b18:
      if (puVar5 == local_a8) {
        return bVar1;
      }
      FUN_00452f80(puVar5,"external/openssl/crypto/ex_data.c",0x137);
      return bVar1;
    }
  }
  else {
    if ((int)uVar4 < 10) {
      puVar5 = local_a8;
LAB_004449a8:
      uVar10 = 0;
      do {
        uVar6 = FUN_0047e450(*(undefined8 *)(&DAT_047f1868 + (ulong)param_1 * 8),uVar10 & 0xffffffff
                            );
        *(undefined8 *)(puVar5 + uVar10 * 8) = uVar6;
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
      goto LAB_004449d4;
    }
    puVar5 = (undefined1 *)FUN_00452c30((ulong)uVar4 << 3,"external/openssl/crypto/ex_data.c",0x115)
    ;
    if (puVar5 != (undefined1 *)0x0) goto LAB_004449a8;
    FUN_0047e600(DAT_047f1860);
  }
  uVar6 = 0x6e;
  uVar7 = 0x41;
  uVar8 = 0x11f;
LAB_00444974:
  FUN_004806c0(0xf,uVar6,uVar7,"external/openssl/crypto/ex_data.c",uVar8);
  return false;
}


