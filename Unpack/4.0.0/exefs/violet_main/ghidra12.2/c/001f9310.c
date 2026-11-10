/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9310; name: FUN_001f9310
 */


void FUN_001f9310(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    do {
      uVar5 = param_2 - 1 >> 1;
      iVar1 = (*(code *)param_1[4])
                        (*(undefined8 *)(*param_1 + param_2 * 8),
                         *(undefined8 *)(*param_1 + uVar5 * 8));
      if (iVar1 == 0) {
        return;
      }
      lVar2 = *param_1;
      puVar3 = *(ulong **)(lVar2 + param_2 * 8);
      puVar4 = *(ulong **)(lVar2 + uVar5 * 8);
      *(ulong **)(lVar2 + uVar5 * 8) = puVar3;
      *puVar3 = uVar5;
      *(ulong **)(*param_1 + param_2 * 8) = puVar4;
      *puVar4 = param_2;
      param_2 = uVar5;
    } while (uVar5 != 0);
  }
  return;
}


