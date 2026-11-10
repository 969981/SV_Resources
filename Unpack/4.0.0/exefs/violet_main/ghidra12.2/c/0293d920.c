/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d920; name: FUN_0293d920
 */


undefined8 FUN_0293d920(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = FUN_0158253c(*(undefined8 *)(param_1 + 8));
  if (((int)param_2 < 0xe) && (*(int *)(lVar2 + (ulong)param_2 * 4 + 0xa8) != 0)) {
    uVar1 = *(uint *)(lVar2 + (ulong)param_2 * 4 + 0x70);
    uVar3 = (ulong)uVar1;
    if (uVar1 != 0) {
      piVar4 = (int *)(lVar2 + (ulong)param_2 * 0x2c + 0xe0);
      do {
        if (*piVar4 == param_3) {
          return 1;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 != 0);
      return 0;
    }
  }
  return 0;
}


