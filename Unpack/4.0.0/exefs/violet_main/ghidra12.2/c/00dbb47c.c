/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbb47c; name: FUN_00dbb47c
 */


void FUN_00dbb47c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    *param_1 = (ulong)plVar2 | 1;
    uVar1 = plVar2[1];
    plVar3 = (long *)(uVar1 & 0xfffffffffffffffc);
    if ((uVar1 & 3) == 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
      puVar4 = (ulong *)(plVar2 + 1);
    }
    else {
      (**(code **)(*plVar2 + 8))();
      *param_1 = *param_1 & 3 | (ulong)plVar3;
      puVar4 = param_1;
    }
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      plVar2 = (long *)(uVar1 & 0xfffffffffffffffc);
      if ((uVar1 & 3) == 0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
        puVar4 = (ulong *)(plVar3 + 1);
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3);
        *puVar4 = *puVar4 & 3 | (ulong)plVar2;
      }
      while (plVar2 != (long *)0x0) {
        puVar5 = (ulong *)(plVar2 + 1);
        uVar1 = *puVar5;
        plVar3 = (long *)(uVar1 & 0xfffffffffffffffc);
        if ((uVar1 & 3) == 0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
          plVar2 = plVar3;
          puVar4 = puVar5;
        }
        else {
          (**(code **)(*plVar2 + 8))(plVar2);
          *puVar4 = *puVar4 & 3 | (ulong)plVar3;
          plVar2 = plVar3;
        }
      }
    }
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}


