/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb68a0; name: FUN_01eb68a0
 */


void FUN_01eb68a0(uint *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint local_18 [2];
  
  FUN_01eb6924(local_18);
  if (local_18[0] == 0) {
    lVar4 = param_3[2];
    cVar2 = *(char *)(*param_3 + lVar4);
    param_3[2] = lVar4 + 1;
    bVar3 = cVar2 != -0x78;
    if (!bVar3) {
      uVar1 = *(undefined4 *)(*param_3 + lVar4 + 1);
      param_3[2] = lVar4 + 5;
      *(undefined4 *)(param_2 + 8) = uVar1;
    }
    *param_1 = (uint)bVar3;
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


