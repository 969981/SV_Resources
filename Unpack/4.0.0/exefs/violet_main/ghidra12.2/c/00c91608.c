/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c91608; name: FUN_00c91608
 */


void FUN_00c91608(char *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  char *pcVar2;
  undefined1 local_38 [8];
  
  lVar1 = *param_4;
  if (*(char *)(lVar1 + (ulong)*(uint *)(param_3 + 0x14)) == '\0') {
    FUN_00c91c88(param_3,param_4[2]);
    lVar1 = *param_4;
  }
  *(undefined1 *)(lVar1 + (ulong)*(uint *)(param_3 + 0x10)) =
       *(undefined1 *)(lVar1 + (ulong)*(uint *)(param_3 + 0xc));
  FUN_00c916dc(local_38,param_3,param_2,param_4);
  *(undefined1 *)(*param_4 + (ulong)*(uint *)(param_3 + 0xc)) = local_38[0];
  *(undefined1 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)) = local_38[0];
  pcVar2 = (char *)(*param_4 + (ulong)*(uint *)(param_2 + 8));
  if (*pcVar2 == '\x03') {
    *(long *)(*param_4 + (ulong)*(uint *)(param_2 + 0xc)) = param_3;
    pcVar2 = (char *)(*param_4 + (ulong)*(uint *)(param_2 + 8));
  }
  *param_1 = *pcVar2;
  return;
}


