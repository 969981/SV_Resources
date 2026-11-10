/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01247a58; name: FUN_01247a58
 */


void FUN_01247a58(long *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0xa6);
    if (uVar2 < 0xb) {
      if (*(byte *)((long)param_1 + 0xa6) != 0) {
        plVar3 = param_1;
        uVar4 = uVar2;
        do {
          if (*plVar3 == param_2) {
            return;
          }
          uVar4 = uVar4 - 1;
          plVar3 = plVar3 + 1;
        } while (uVar4 != 0);
      }
      param_1[uVar2] = param_2;
      *(undefined1 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0xa6) + 0x84) = 0;
      *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0xa6) * 2 + 0x58) = 0;
      *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0xa6) * 2 + 0x6e) = 0;
      bVar1 = *(char *)((long)param_1 + 0xa6) + 1;
      *(byte *)((long)param_1 + 0xa6) = bVar1;
      if (*(byte *)((long)param_1 + 0xa7) < bVar1) {
        *(byte *)((long)param_1 + 0xa7) = bVar1;
      }
    }
  }
  return;
}


