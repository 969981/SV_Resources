/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fbff0; name: FUN_003fbff0
 */


undefined8 FUN_003fbff0(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_003fbdc0();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_003ed1c0();
  if (lVar2 != 0) {
    FUN_003ed410(lVar2);
    uVar3 = FUN_003ed5c0(lVar2);
    lVar4 = FUN_003ed5c0(lVar2);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
LAB_003fc0f8:
        iVar1 = FUN_003fd360(*(undefined8 *)(param_1 + 8),0x40,lVar2,0);
        if (-1 < iVar1) {
          if (iVar1 == 0) {
            uVar6 = *param_2 | 1;
LAB_003fc1b8:
            *param_2 = uVar6;
          }
          else if (*(long *)(param_1 + 0x40) == 0) {
            iVar1 = FUN_003f2040(uVar3,*(undefined8 *)(param_1 + 8));
            if ((iVar1 == 0) || (iVar1 = FUN_003fd360(uVar3,0x40,lVar2,0), iVar1 < 0))
            goto LAB_003fc184;
            if (iVar1 == 0) {
              uVar6 = *param_2 | 2;
              goto LAB_003fc1b8;
            }
          }
          uVar3 = 1;
          goto LAB_003fc188;
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = FUN_003eb200();
        iVar1 = FUN_003ebf70(uVar7,uVar5);
        if ((iVar1 < 1) ||
           (iVar1 = FUN_003ebf70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)),
           -1 < iVar1)) {
LAB_003fc070:
          *param_2 = *param_2 | 8;
        }
        else {
          iVar1 = FUN_003fd370(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40)
                               ,*(undefined8 *)(param_1 + 8),lVar2);
          if (iVar1 == 0) goto LAB_003fc184;
          iVar1 = FUN_003ec5b0(uVar3);
          if (iVar1 == 0) goto LAB_003fc070;
        }
        iVar1 = FUN_003fd360(*(undefined8 *)(param_1 + 0x40),0x40,lVar2,0);
        if (-1 < iVar1) {
          if (iVar1 == 0) {
            *param_2 = *param_2 | 0x10;
          }
          iVar1 = FUN_003ed910(uVar3,lVar4,*(undefined8 *)(param_1 + 8),
                               *(undefined8 *)(param_1 + 0x40),lVar2);
          if (iVar1 != 0) {
            iVar1 = FUN_003ec5b0(lVar4);
            if (iVar1 == 0) {
              *param_2 = *param_2 | 0x20;
            }
            if ((*(long *)(param_1 + 0x48) != 0) &&
               (iVar1 = FUN_003ebf70(*(long *)(param_1 + 0x48),uVar3), iVar1 != 0)) {
              *param_2 = *param_2 | 0x40;
            }
            goto LAB_003fc0f8;
          }
        }
      }
    }
  }
LAB_003fc184:
  uVar3 = 0;
LAB_003fc188:
  FUN_003ed530(lVar2);
  FUN_003ed280(lVar2);
  return uVar3;
}


