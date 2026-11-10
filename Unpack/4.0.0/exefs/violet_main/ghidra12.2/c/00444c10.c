/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00444c10; name: FUN_00444c10
 */


void FUN_00444c10(uint param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_a0 [80];
  
  puVar3 = local_a0;
  if (0xf < param_1) {
    FUN_004806c0(0xf,0x71,7,"external/openssl/crypto/ex_data.c",0x37);
    goto LAB_00444dcc;
  }
  uVar8 = (ulong)param_1;
  iVar1 = FUN_0047e650(&DAT_047f1858,FUN_00444e80);
  if ((iVar1 == 0) || (DAT_047f185c == 0)) {
    FUN_004806c0(0xf,0x71,0x41,"external/openssl/crypto/ex_data.c",0x3c);
    goto LAB_00444dcc;
  }
  if (DAT_047f1860 == 0) goto LAB_00444dcc;
  FUN_0047e5e0();
  uVar2 = FUN_0047e430(*(undefined8 *)(&DAT_047f1868 + uVar8 * 8));
  if ((int)uVar2 < 1) {
    FUN_0047e600(DAT_047f1860);
LAB_00444ce4:
    puVar3 = (undefined1 *)0x0;
  }
  else {
    uVar5 = (ulong)uVar2;
    if ((9 < (int)uVar2) &&
       (puVar3 = (undefined1 *)FUN_00452c30(uVar5 << 3,"external/openssl/crypto/ex_data.c",0x151),
       puVar3 == (undefined1 *)0x0)) {
      FUN_0047e600(DAT_047f1860);
      uVar7 = 0;
      do {
        FUN_0047e5e0(DAT_047f1860);
        puVar6 = (undefined8 *)FUN_0047e450(*(undefined8 *)(&DAT_047f1868 + uVar8 * 8),uVar7);
        FUN_0047e600(DAT_047f1860);
        if ((puVar6 != (undefined8 *)0x0) && (puVar6[3] != 0)) {
          if ((*param_3 == 0) || (iVar1 = FUN_0047e430(), iVar1 <= (int)uVar7)) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0047e450(*param_3,uVar7);
          }
          (*(code *)puVar6[3])(param_2,uVar4,param_3,uVar7,*puVar6,puVar6[1]);
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      goto LAB_00444ce4;
    }
    uVar9 = 0;
    do {
      uVar4 = FUN_0047e450(*(undefined8 *)(&DAT_047f1868 + uVar8 * 8),uVar9 & 0xffffffff);
      *(undefined8 *)(puVar3 + uVar9 * 8) = uVar4;
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    FUN_0047e600(DAT_047f1860);
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        puVar6 = *(undefined8 **)(puVar3 + uVar8 * 8);
        if ((puVar6 != (undefined8 *)0x0) && (puVar6[3] != 0)) {
          if ((*param_3 == 0) || (iVar1 = FUN_0047e430(), (long)iVar1 <= (long)uVar8)) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0047e450(*param_3,uVar8 & 0xffffffff);
          }
          (*(code *)puVar6[3])(param_2,uVar4,param_3,uVar8 & 0xffffffff,*puVar6,puVar6[1]);
        }
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    if (puVar3 == local_a0) goto LAB_00444dcc;
  }
  FUN_00452f80(puVar3,"external/openssl/crypto/ex_data.c",0x167);
LAB_00444dcc:
  FUN_0047db00(*param_3);
  *param_3 = 0;
  return;
}


