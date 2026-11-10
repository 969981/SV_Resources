/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e4544; name: FUN_001e4544
 */


undefined8
FUN_001e4544(undefined8 param_1,byte *param_2,size_t param_3,long *param_4,long *param_5,
            uint param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcStack_70;
  byte local_64;
  byte local_63;
  undefined1 local_62;
  
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  lVar3 = FUN_001ec2f8(param_3 + 1);
  if (lVar3 == 0) {
    uVar4 = 0x1b;
  }
  else {
    if (param_3 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = param_3 + 1;
      lVar8 = 0;
      do {
        uVar6 = param_3;
        bVar1 = *param_2;
        pbVar9 = param_2;
        if ((uVar6 < 3) || (bVar1 != 0x25)) {
LAB_001e4608:
          param_2 = pbVar9;
          if ((bVar1 < 0x20) && ((param_6 & 1) != 0)) {
            FUN_001ec308(lVar3);
            return 3;
          }
        }
        else {
          iVar2 = FUN_001cb2d4(param_2[1]);
          if (iVar2 != 0) {
            pbVar9 = param_2 + 2;
            iVar2 = FUN_001cb2d4(*pbVar9);
            if (iVar2 != 0) {
              local_64 = param_2[1];
              local_63 = param_2[2];
              local_62 = 0;
              strtoul((char *)&local_64,&pcStack_70,0x10);
              bVar1 = FUN_001ec180();
              uVar6 = uVar7 - 3;
              goto LAB_001e4608;
            }
          }
          bVar1 = 0x25;
        }
        lVar5 = lVar8 + 1;
        param_2 = param_2 + 1;
        *(byte *)(lVar3 + lVar8) = bVar1;
        param_3 = uVar6 - 1;
        uVar7 = uVar6;
        lVar8 = lVar5;
      } while (uVar6 - 1 != 0);
    }
    *(undefined1 *)(lVar3 + lVar5) = 0;
    if (param_5 != (long *)0x0) {
      *param_5 = lVar5;
    }
    uVar4 = 0;
    *param_4 = lVar3;
  }
  return uVar4;
}


