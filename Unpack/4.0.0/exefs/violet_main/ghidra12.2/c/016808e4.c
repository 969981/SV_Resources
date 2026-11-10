/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016808e4; name: FUN_016808e4
 */


undefined8 FUN_016808e4(int *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  
  if ((char)param_1[6] != '\0') {
    uVar1 = param_1[5];
    if (uVar1 != 0) {
      uVar3 = (uint)(*param_1 == 1);
      if (uVar1 != 1) {
        lVar2 = (ulong)uVar1 - 1;
        piVar4 = param_1;
        do {
          piVar4 = piVar4 + 1;
          if (*piVar4 == 1) {
            uVar3 = uVar3 + 1;
          }
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (uVar3 != 0) {
        return 0;
      }
      uVar3 = (uint)(*param_1 == 3);
      if (uVar1 != 1) {
        lVar2 = (ulong)uVar1 - 1;
        do {
          param_1 = param_1 + 1;
          if (*param_1 == 3) {
            uVar3 = uVar3 + 1;
          }
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (uVar3 != 0) {
        return 1;
      }
    }
  }
  return 2;
}


