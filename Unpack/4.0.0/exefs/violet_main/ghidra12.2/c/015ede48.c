/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ede48; name: FUN_015ede48
 */


void FUN_015ede48(undefined1 *param_1,long *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (((DAT_04839790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839790), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (((DAT_04839780 == 0) || (*param_2 == 0)) || (*(short *)(*param_2 + 0x1a) == 0)) {
LAB_015ede80:
    *param_1 = 0;
  }
  else {
    puVar2 = *(undefined2 **)(DAT_04839780 + 0x4058);
    puVar3 = *(undefined2 **)(DAT_04839780 + 0x4060);
    if (puVar2 == puVar3) {
LAB_015edef4:
      puVar2 = *(undefined2 **)(DAT_04839780 + 0x4090);
      puVar3 = *(undefined2 **)(DAT_04839780 + 0x4098);
      if (puVar2 == puVar3) goto LAB_015ede80;
      do {
        if (((*(long *)(puVar2 + 4) != 0) && (*(short *)(*(long *)(puVar2 + 4) + 0x1a) != 0)) &&
           (*(long *)(puVar2 + 4) == *param_2)) goto LAB_015edf3c;
        puVar2 = puVar2 + 0xe4;
      } while (puVar3 != puVar2);
      puVar2 = puVar3;
LAB_015edf3c:
      puVar3 = *(undefined2 **)(DAT_04839780 + 0x4098);
      *param_1 = 0;
      if (puVar2 == puVar3) {
        return;
      }
    }
    else {
      do {
        if (((*(long *)(puVar2 + 4) != 0) && (*(short *)(*(long *)(puVar2 + 4) + 0x1a) != 0)) &&
           (*(long *)(puVar2 + 4) == *param_2)) goto LAB_015edee8;
        puVar2 = puVar2 + 0x58;
      } while (puVar3 != puVar2);
      puVar2 = puVar3;
LAB_015edee8:
      if (puVar2 == *(undefined2 **)(DAT_04839780 + 0x4060)) goto LAB_015edef4;
    }
    *(undefined2 *)(param_1 + 2) = *puVar2;
    *param_1 = 1;
  }
  return;
}


