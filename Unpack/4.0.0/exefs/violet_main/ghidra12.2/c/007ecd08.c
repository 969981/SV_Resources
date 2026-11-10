/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ecd08; name: FUN_007ecd08
 */


void FUN_007ecd08(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    local_48[0] = 0x10408;
  }
  else {
    lVar1 = param_2 + 0x10;
    if (*(long *)(param_2 + 0x18) != lVar1) {
      iVar2 = *(int *)(param_2 + 0x24);
      plVar4 = (long *)(*(long *)(param_2 + 0x18) - (long)iVar2);
      do {
        (**(code **)(*plVar4 + 0x30))(param_1,plVar4);
        lVar3 = (long)*(int *)(param_2 + 0x24);
        if (*param_1 != 0) {
          if (*(long *)(param_2 + 0x18) == lVar1) {
            return;
          }
          plVar4 = (long *)(*(long *)(param_2 + 0x18) - lVar3);
          do {
            (**(code **)(*plVar4 + 0x38))(plVar4);
            plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_2 + 0x24) + 8) -
                             (long)*(int *)(param_2 + 0x24));
          } while (plVar4 != (long *)(lVar1 - lVar3));
          return;
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar3 + 8) + (long)-*(int *)(param_2 + 0x24));
      } while (plVar4 != (long *)(lVar1 - iVar2));
    }
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


