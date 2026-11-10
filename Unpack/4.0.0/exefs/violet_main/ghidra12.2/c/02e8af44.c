/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8af44; name: FUN_02e8af44
 */


void FUN_02e8af44(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined2 param_5)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined2 local_44 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    puVar3 = param_1;
    local_44[0] = param_5;
    local_40 = param_3;
    uStack_38 = param_4;
    do {
      if (((plVar2[2] == param_2) &&
          (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_40,0x10), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,local_44,2), iVar1 != 0)) {
        if ((*param_1 & 3) == 0) {
          *puVar3 = plVar2[1] & 0xfffffffffffffffcU | *puVar3 & 3;
          (**(code **)(*plVar2 + 8))(plVar2);
          return;
        }
        plVar2[1] = plVar2[1] & 0xfffffffffffffffcU | 1;
        return;
      }
      puVar3 = (ulong *)(plVar2 + 1);
      plVar2 = (long *)(*puVar3 & 0xfffffffffffffffc);
    } while (plVar2 != (long *)0x0);
  }
  return;
}


