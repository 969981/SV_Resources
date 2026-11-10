/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00720f70; name: FUN_00720f70
 */


void FUN_00720f70(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_60 [4];
  long local_40 [2];
  
  lStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (local_80 != *param_3) {
    do {
      local_40[0] = *(long *)(local_80 + 8);
      FUN_006eedc4(local_60,*(undefined8 *)(param_1 + 0x10),local_40,0);
      if (local_60[0] == (long *)0x0) {
        lVar3 = *(long *)(local_80 + 8);
        local_40[1] = 0;
        local_40[0] = lVar3;
        FUN_006eeb44(local_60,*(undefined8 *)(param_1 + 0x10),local_40);
        plVar1 = local_60[0];
        lVar2 = local_60[0][1];
        if (lVar2 == 0) {
          lVar2 = FUN_006ee9b0(param_1,lVar3);
          *plVar1 = lVar2;
          plVar1[1] = lVar2;
        }
        FUN_001fcec0(lVar2 + 0x18,lVar3 + 0x18);
      }
      FUN_006ef338(&local_80);
    } while (local_80 != *param_3);
  }
  return;
}


