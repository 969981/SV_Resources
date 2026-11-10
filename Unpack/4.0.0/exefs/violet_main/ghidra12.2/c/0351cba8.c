/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351cba8; name: FUN_0351cba8
 */


void FUN_0351cba8(long *param_1,int *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((*(byte *)((long)param_1 + 0x5a) >> 4 & 1) == 0) {
    lVar5 = param_1[7];
    local_30 = *param_2;
    if (lVar5 == 0) {
      if (((*(byte *)((long)param_1 + 0x5a) & 3) != 0) && (0 < local_30)) {
        iStack_2c = param_2[1];
        local_48 = param_1 + 5;
        local_40 = 0x2000000;
        local_38 = 0x3f800000;
        local_28 = 0x19;
        local_24 = 0x100;
        local_22 = 0;
        lVar5 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_48,0);
        param_1[7] = lVar5;
        if (lVar5 == 0) {
          (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
        }
        return;
      }
    }
    else {
      if (local_30 != 0) {
        FUN_034e6c0c(0,*(undefined8 *)PTR_DAT_047e7038,lVar5,0x2000000,local_30,param_2[1],0);
        return;
      }
      uVar4 = *(uint *)(lVar5 + 0x30);
      if (uVar4 != 0) {
        puVar7 = *(undefined8 **)(lVar5 + 0x28);
        puVar3 = puVar7 + uVar4;
        if ((long *)*puVar7 != param_1 + 5) {
          lVar8 = (ulong)uVar4 * 8;
          do {
            lVar8 = lVar8 + -8;
            if (lVar8 == 0) {
              puVar7 = puVar3;
              break;
            }
            puVar2 = puVar7 + 1;
            puVar1 = puVar7 + 1;
            puVar7 = puVar2;
          } while ((long *)*puVar1 != param_1 + 5);
        }
        if (puVar3 != puVar7) {
          if (uVar4 < 2) {
            iVar6 = 0;
          }
          else {
            *puVar7 = puVar3[-1];
            iVar6 = *(int *)(lVar5 + 0x30) + -1;
          }
          *(int *)(lVar5 + 0x30) = iVar6;
        }
      }
      param_1[7] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0351cd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}


