/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347e1d4; name: FUN_0347e1d4
 */


undefined8
FUN_0347e1d4(long param_1,ulong param_2,uint param_3,int param_4,void *param_5,int param_6)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  
  puVar2 = PTR_DAT_047e2fd0;
  plVar6 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x48 + (ulong)param_3 * 0x18 + 8);
  if (*plVar6 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar6 = 0;
  }
  lVar7 = param_1 + (param_2 & 0xffffffff) * 0x48 + (ulong)param_3 * 0x18;
  uVar3 = 0x1f;
  puVar8 = (uint *)(lVar7 + 0x10);
  puVar8[0] = 0;
  puVar8[1] = 0;
  if ((param_4 != 0) && (param_5 != (void *)0x0)) {
    *(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 0x48 + (ulong)param_3 * 0x18 + 0x18) = 1;
    *puVar8 = param_4 + 2U;
    lVar4 = (**(code **)(puVar2 + 0x10))(0,(param_4 + 2U) * 0x14);
    *plVar6 = lVar4;
    if (lVar4 == 0) {
      uVar3 = 0x34;
      *puVar8 = 0;
    }
    else {
      piVar1 = (int *)(lVar7 + 0x14);
      *piVar1 = param_6;
      memcpy((void *)(lVar4 + 0xc),param_5,(ulong)(uint)(param_4 * 0xc));
      *(undefined4 *)(*plVar6 + 8) = 9;
      *(undefined4 *)*plVar6 = 0xff7fffff;
      *(undefined4 *)(*plVar6 + 4) = *(undefined4 *)(*plVar6 + 0x10);
      *(undefined4 *)(*plVar6 + (ulong)(*puVar8 - 1) * 0xc + 8) = 9;
      *(undefined4 *)(*plVar6 + (ulong)(*puVar8 - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(*plVar6 + (ulong)(*puVar8 - 1) * 0xc + 4) =
           *(undefined4 *)(*plVar6 + (ulong)(*puVar8 - 2) * 0xc + 4);
      FUN_0346cdac(plVar6);
      if (param_3 == 0) {
        if (*piVar1 == 0) {
          *piVar1 = 4;
        }
        else if (*piVar1 == 2) {
          if (*puVar8 != 0) {
            uVar5 = 0;
            lVar7 = 4;
            do {
              uVar5 = uVar5 + 1;
              *(float *)(*plVar6 + lVar7) = *(float *)(*plVar6 + lVar7) + 1.0;
              lVar7 = lVar7 + 0xc;
            } while (uVar5 < *puVar8);
          }
          *piVar1 = 0;
          FUN_0346cdac(plVar6);
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


