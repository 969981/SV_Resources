/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e44788; name: FUN_00e44788
 */


void FUN_00e44788(char *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char local_38 [8];
  long *local_18;
  
  plVar1 = *(long **)(param_2 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_38[0] = *PTR_DAT_047dafa8;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x18);
    uVar4 = (ulong)*(uint *)(lVar2 + 0xc);
    plVar3 = *(long **)(*param_3 + uVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x40))(param_1,plVar3,*(undefined8 *)(param_2 + 0x38),param_3);
      if (*param_1 == '\x03') {
        return;
      }
      *(undefined8 *)(*param_3 + (ulong)*(uint *)(*(long *)(param_2 + 0x18) + 0xc)) = 0;
      FUN_00e448d4(&local_18,*param_3 + (ulong)*(uint *)(param_2 + 0x58));
      if (local_18 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x38))();
      if (local_18 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x18))();
      return;
    }
    *(undefined8 *)(uVar4 + *param_3) = 0;
    (**(code **)(*plVar1 + 0x40))(local_38,plVar1,lVar2,param_3);
    if (((*(long *)(*param_3 + (ulong)*(uint *)(*(long *)(param_2 + 0x18) + 0xc)) != 0) &&
        (FUN_00e448d4(&local_18,*param_3 + (ulong)*(uint *)(param_2 + 0x58)),
        local_18 != (long *)0x0)) &&
       ((**(code **)(*local_18 + 0x30))(0x40a00000), local_18 != (long *)0x0)) {
      (**(code **)(*local_18 + 0x18))();
    }
  }
  *param_1 = local_38[0];
  return;
}


