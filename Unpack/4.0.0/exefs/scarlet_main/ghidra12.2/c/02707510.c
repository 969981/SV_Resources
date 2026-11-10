/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02707510; name: FUN_02707510
 */


byte FUN_02707510(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + 0x10);
  puVar3 = (undefined8 *)(lVar5 + 0x10);
  lVar1 = FUN_0013c0f0();
  if (*(char *)(lVar5 + 0x18) == 'E') {
    puVar2 = (undefined8 *)FUN_0013d320(*puVar3,lVar1);
    if ((*(byte *)(puVar2 + 1) & 0xf) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      *puVar3 = *puVar2;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 + 1);
      lVar1 = *(long *)(param_1 + 0x10) + 0x10;
      *(long *)(param_1 + 0x10) = lVar1;
      goto LAB_027075c0;
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  *plVar4 = lVar1;
  *(byte *)(plVar4 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_001400d0(param_1,puVar3,lVar1,lVar1,puVar2);
  lVar1 = *(long *)(param_1 + 0x10);
LAB_027075c0:
  return *(byte *)(lVar1 + -8) & 0xf;
}


