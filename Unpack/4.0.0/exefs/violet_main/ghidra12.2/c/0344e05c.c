/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344e05c; name: FUN_0344e05c
 */


void FUN_0344e05c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0xe) >> 2 & 1) == 0) {
    iVar3 = *(int *)((long)param_1 + 0x4c) + 1;
    *(int *)((long)param_1 + 0x4c) = iVar3;
    puVar2 = PTR_DAT_047e2fd0;
    if ((param_3 != 0) && ((*(byte *)(param_1 + 0xe) >> 1 & 1) == 0)) {
      lVar4 = param_1[0xd];
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          if (*(uint *)(lVar4 + 0xc) < param_3) {
            lVar6 = *(long *)(lVar4 + 0x10);
            plVar1 = param_1 + 0xd;
            if (param_1[0xd] != lVar4) {
              plVar1 = (long *)(lVar5 + 0x10);
            }
            *plVar1 = lVar6;
            if (param_1[0xc] == lVar4) {
              param_1[0xc] = lVar5;
            }
            FUN_0344da38(param_1,param_2,lVar4,*(undefined4 *)(lVar4 + 0xc),0,0,0);
            (**(code **)(puVar2 + 0x30))(0,lVar4);
            lVar4 = lVar6;
          }
          else {
            *(uint *)(lVar4 + 0xc) = *(uint *)(lVar4 + 0xc) - param_3;
            lVar5 = lVar4;
            lVar4 = *(long *)(lVar4 + 0x10);
          }
        } while (lVar4 != 0);
        iVar3 = *(int *)((long)param_1 + 0x4c);
      }
    }
    *(int *)((long)param_1 + 0x4c) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x0344e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
      return;
    }
  }
  return;
}


