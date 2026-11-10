/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00444640; name: FUN_00444640
 */


undefined8 FUN_00444640(uint param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_a0 [80];
  
  puVar3 = local_a0;
  if (param_1 < 0x10) {
    iVar1 = FUN_0047e650(&DAT_047f1858,FUN_00444e80);
    if ((iVar1 == 0) || (DAT_047f185c == 0)) {
      uVar4 = 0x71;
      uVar5 = 0x41;
      uVar6 = 0x3c;
    }
    else {
      if (DAT_047f1860 == 0) {
        return 0;
      }
      FUN_0047e5e0();
      *param_3 = 0;
      uVar2 = FUN_0047e430(*(undefined8 *)(&DAT_047f1868 + (ulong)param_1 * 8));
      uVar8 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        puVar3 = (undefined1 *)0x0;
      }
      else if (((int)uVar2 < 10) ||
              (puVar3 = (undefined1 *)
                        FUN_00452c30(uVar8 << 3,"external/openssl/crypto/ex_data.c",0xe2),
              puVar3 != (undefined1 *)0x0)) {
        uVar9 = 0;
        do {
          uVar4 = FUN_0047e450(*(undefined8 *)(&DAT_047f1868 + (ulong)param_1 * 8),
                               uVar9 & 0xffffffff);
          *(undefined8 *)(puVar3 + uVar9 * 8) = uVar4;
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
      FUN_0047e600(DAT_047f1860);
      if (((int)uVar2 < 1) || (puVar3 != (undefined1 *)0x0)) {
        if (0 < (int)uVar2) {
          uVar9 = 0;
          do {
            if ((*(long *)(puVar3 + uVar9 * 8) != 0) &&
               (*(long *)(*(long *)(puVar3 + uVar9 * 8) + 0x10) != 0)) {
              if ((*param_3 == 0) || (iVar1 = FUN_0047e430(), (long)iVar1 <= (long)uVar9)) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_0047e450(*param_3,uVar9 & 0xffffffff);
              }
              puVar7 = *(undefined8 **)(puVar3 + uVar9 * 8);
              (*(code *)puVar7[2])(param_2,uVar4,param_3,uVar9 & 0xffffffff,*puVar7,puVar7[1]);
            }
            uVar9 = uVar9 + 1;
          } while (uVar8 != uVar9);
        }
        if (puVar3 != local_a0) {
          FUN_00452f80(puVar3,"external/openssl/crypto/ex_data.c",0xf5);
        }
        return 1;
      }
      uVar5 = 0x41;
      uVar6 = 0xea;
      uVar4 = 0x70;
    }
  }
  else {
    uVar4 = 0x71;
    uVar6 = 0x37;
    uVar5 = 7;
  }
  FUN_004806c0(0xf,uVar4,uVar5,"external/openssl/crypto/ex_data.c",uVar6);
  return 0;
}


