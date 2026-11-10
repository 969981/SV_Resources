/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131cbf0; name: FUN_0131cbf0
 */


undefined8 FUN_0131cbf0(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == *param_2) {
    do {
      if (uVar4 == 0x10) {
        puVar2 = param_1 + 1;
        uVar3 = (ulong)*puVar2;
        lVar5 = uVar3 * 2 + 4;
        param_1 = param_1 + uVar3 + 2;
        puVar1 = param_2 + uVar3 + 2;
        while (param_2 = param_2 + 1, lVar5 != 0) {
          uVar4 = *puVar2;
          lVar5 = lVar5 + -2;
          puVar2 = puVar2 + 1;
          if (uVar4 != *param_2) {
            return 0;
          }
        }
        uVar4 = *param_1;
        param_2 = puVar1;
      }
      if (uVar4 == 0) {
        return 1;
      }
      param_1 = param_1 + 1;
      uVar4 = *param_1;
      param_2 = param_2 + 1;
    } while (uVar4 == *param_2);
  }
  return 0;
}


