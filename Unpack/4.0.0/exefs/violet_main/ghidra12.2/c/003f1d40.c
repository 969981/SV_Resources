/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f1d40; name: FUN_003f1d40
 */


undefined8
FUN_003f1d40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = *(int *)(param_3 + 1);
  if (iVar2 == 0 || iVar3 == 0) {
    FUN_003eb9f0(param_1,0);
    return 1;
  }
  FUN_003ed410(param_4);
  if (((param_1 != param_2) && (puVar6 = param_1, param_1 != param_3)) ||
     (puVar6 = (undefined8 *)FUN_003ed5c0(param_4), puVar6 != (undefined8 *)0x0)) {
    iVar5 = iVar2 - iVar3;
    if ((iVar2 == 8) && (iVar5 == 0)) {
      lVar7 = FUN_003eb9a0(puVar6,0x10);
      if (lVar7 != 0) {
        *(undefined4 *)(puVar6 + 1) = 0x10;
        FUN_003ee790(*puVar6,*param_2,*param_3);
        goto LAB_003f1ecc;
      }
    }
    else {
      iVar1 = iVar3 + iVar2;
      if (((iVar2 < 0x10) || (iVar3 < 0x10)) || (2 < iVar5 + 1U)) {
        lVar7 = FUN_003eb9a0(puVar6,iVar1);
        if (lVar7 != 0) {
          *(int *)(puVar6 + 1) = iVar1;
          FUN_003f1740(*puVar6,*param_2,iVar2,*param_3,iVar3);
          goto LAB_003f1ecc;
        }
      }
      else {
        iVar4 = iVar2;
        if (iVar5 < 0) {
          iVar4 = iVar3;
        }
        iVar5 = FUN_003eb210(iVar4);
        puVar8 = (undefined8 *)FUN_003ed5c0(param_4);
        if (puVar8 != (undefined8 *)0x0) {
          iVar5 = 1 << (ulong)(iVar5 - 1U & 0x1f);
          iVar4 = iVar2 - iVar5;
          if ((iVar4 == 0 || iVar2 < iVar5) && (iVar3 - iVar5 == 0 || iVar3 < iVar5)) {
            lVar7 = FUN_003eb9a0(puVar8,iVar5 << 2);
            if ((lVar7 != 0) && (lVar7 = FUN_003eb9a0(puVar6,iVar5 << 2), lVar7 != 0)) {
              FUN_003f12b0(*puVar6,*param_2,*param_3,iVar5,iVar4,iVar3 - iVar5,*puVar8);
              *(int *)(puVar6 + 1) = iVar1;
LAB_003f1ecc:
              *(uint *)(puVar6 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
              if ((puVar6 == param_1) || (lVar7 = FUN_003eb8f0(param_1,puVar6), lVar7 != 0)) {
                uVar9 = 1;
                goto LAB_003f1f4c;
              }
            }
          }
          else {
            lVar7 = FUN_003eb9a0(puVar8,iVar5 << 3);
            if ((lVar7 != 0) && (lVar7 = FUN_003eb9a0(puVar6,iVar5 << 3), lVar7 != 0)) {
              FUN_003f1890(*puVar6,*param_2,*param_3,iVar5,iVar4,iVar3 - iVar5,*puVar8);
              *(int *)(puVar6 + 1) = iVar1;
              goto LAB_003f1ecc;
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_003f1f4c:
  FUN_003ed530(param_4);
  return uVar9;
}


