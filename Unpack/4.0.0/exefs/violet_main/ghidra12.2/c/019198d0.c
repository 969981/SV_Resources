/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019198d0; name: FUN_019198d0
 */


void FUN_019198d0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047d8b70;
  lVar4 = *param_2;
  if (lVar4 != *param_3) {
    do {
      plVar1 = (long *)puVar3;
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 0x30);
      }
      plVar2 = (long *)puVar3;
      if (*param_4 != 0) {
        plVar2 = (long *)(*param_4 + 0x30);
      }
      if ((*plVar1 == *plVar2) &&
         ((*(long *)(lVar4 + 0x48) == 0 || (*(short *)(*(long *)(lVar4 + 0x48) + 0x1a) == 0))))
      break;
      FUN_01919998(param_2);
      lVar4 = *param_2;
    } while (lVar4 != *param_3);
  }
  lVar4 = *param_2;
  lVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar5;
  *param_1 = lVar4;
  return;
}


