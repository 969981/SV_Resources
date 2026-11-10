/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dc980; name: FUN_008dc980
 */


undefined8 FUN_008dc980(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  undefined *local_80 [4];
  
  *(long *)(param_1 + 0x10) = param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  lVar6 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = lVar6;
  puVar7 = &DAT_03c4874c;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar6 + 0x18);
  local_80[0] = &DAT_03c2d490;
  local_80[1] = &DAT_03c91216;
  local_80[2] = &DAT_03ca5478;
  local_80[3] = &DAT_03c1813a;
  lVar3 = FUN_008dcbc4(uVar2,&DAT_03c4874c);
  lVar6 = 0;
  lVar8 = 0x40;
  do {
    lVar4 = FUN_008dcbc4(*(undefined8 *)(param_1 + 0x18),puVar7);
    if ((lVar6 == 0x20) && (lVar4 == 0)) {
      if ((ulong)*(byte *)(param_3 + 0x14) != 0xff) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        if (lVar4 != 0) {
          lVar4 = FUN_008dcbc4(*(long *)(param_1 + 0x18),
                               *(long *)(lVar4 + (ulong)*(byte *)(param_3 + 0x14) * 0x10 + 0x20) + 2
                              );
          goto LAB_008dca6c;
        }
      }
LAB_008dcaf4:
      ((undefined4 *)(param_1 + lVar8))[5] = (uint)*(byte *)(lVar3 + 0xe);
      *(undefined4 *)(param_1 + lVar8) = *(undefined4 *)(lVar3 + 8);
      lVar4 = lVar3;
    }
    else {
LAB_008dca6c:
      if (lVar4 == 0) goto LAB_008dcaf4;
      iVar9 = *(int *)(lVar4 + 8);
      if (lVar6 == 0x20) {
        lVar5 = FUN_008dcbc4(*(undefined8 *)(param_1 + 0x18),&DAT_03c55db8);
        if (lVar5 == 0) {
          if ((ulong)*(byte *)(param_3 + 0x15) != 0xff) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
            if ((lVar5 != 0) &&
               (lVar5 = FUN_008dcbc4(*(long *)(param_1 + 0x18),
                                     *(long *)(lVar5 + (ulong)*(byte *)(param_3 + 0x15) * 0x10 +
                                              0x20) + 2), lVar5 != 0)) goto LAB_008dca8c;
          }
        }
        else {
LAB_008dca8c:
          if (iVar9 == *(int *)(lVar5 + 8)) {
            iVar1 = 0xb01;
            if (iVar9 != 0x901) {
              iVar1 = iVar9;
            }
            iVar9 = 0x1501;
            if (iVar1 != 0x1201) {
              iVar9 = iVar1;
            }
            iVar1 = 0x1505;
            if (iVar9 != 0x1205) {
              iVar1 = iVar9;
            }
            iVar9 = 0x1905;
            if (iVar1 != 0x1705) {
              iVar9 = iVar1;
            }
            iVar1 = 0xb02;
            if (iVar9 != 0x902) {
              iVar1 = iVar9;
            }
            iVar9 = 0x1502;
            if (iVar1 != 0x1202) {
              iVar9 = iVar1;
            }
          }
          else {
            FUN_008d43e0("%s.fmdb : A format of _u1 is different from _uo of the particle shape.\n",
                         *(long *)(*(long *)(param_1 + 0x10) + 8) + 2);
          }
        }
        *(int *)(param_1 + 0x50) = iVar9;
      }
      else {
        *(int *)(param_1 + lVar8) = iVar9;
      }
      *(uint *)(param_1 + lVar8 + 0x14) = (uint)*(byte *)(lVar4 + 0xe);
    }
    *(ulong *)(param_1 + lVar6 + 0x68) = (ulong)*(ushort *)(lVar4 + 0xc);
    if (lVar6 == 0x20) {
      FUN_008f0980(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),param_1 + 0x30);
      return 1;
    }
    puVar7 = *(undefined **)((long)local_80 + lVar6);
    lVar6 = lVar6 + 8;
    lVar8 = lVar8 + 4;
  } while( true );
}


