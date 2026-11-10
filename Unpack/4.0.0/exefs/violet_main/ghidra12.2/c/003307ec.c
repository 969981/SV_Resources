/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003307ec; name: FUN_003307ec
 */


ulong FUN_003307ec(char *param_1)

{
  ulong *puVar1;
  int iVar2;
  char *__s2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar1 = DAT_047ef4c0;
  if (DAT_047ef4c0 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *DAT_047ef4c0;
  if (1 < uVar3) {
    uVar5 = 0;
    puVar6 = DAT_047ef4c0 + 1;
    do {
      puVar4 = puVar6;
      if ((uVar3 & 1) != 0) {
        puVar4 = (ulong *)puVar1[1];
      }
      __s2 = (char *)(**(code **)(*(long *)puVar4[uVar5] + 0x18))();
      iVar2 = strcmp(param_1,__s2);
      if (iVar2 == 0) {
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)puVar1[1];
        }
        return puVar6[uVar5];
      }
      uVar3 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3 >> 1);
  }
  return 0;
}


