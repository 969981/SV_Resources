/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02918680; name: FUN_02918680
 */


undefined8 FUN_02918680(long param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (6 < bVar2) {
    cVar1 = *(char *)(param_1 + 0xa0);
    if (((((cVar1 == *(char *)(param_1 + 0xb8)) || (cVar1 == *(char *)(param_1 + 0xb9))) ||
         (*(char *)(param_1 + 0xa1) == *(char *)(param_1 + 0xb8))) ||
        (*(char *)(param_1 + 0xa1) == *(char *)(param_1 + 0xb9))) &&
       ((((cVar1 == *(char *)(param_1 + 0xc4) || (cVar1 == *(char *)(param_1 + 0xc5))) ||
         ((*(char *)(param_1 + 0xa1) == *(char *)(param_1 + 0xc4) ||
          (*(char *)(param_1 + 0xa1) == *(char *)(param_1 + 0xc5))))) &&
        (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32)
        , (uVar3 & 1) != 0)))) {
      return 2;
    }
  }
  return 0;
}


