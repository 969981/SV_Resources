/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001232e0; name: FUN_001232e0
 */


int FUN_001232e0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  
  puVar1 = &DAT_03c1ceec;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  FUN_00145790(param_1,auStack_58,param_2,param_3);
  iVar2 = FUN_00128490(param_1,auStack_58,puVar1,param_5);
  if ((iVar2 == 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + -0x10), *(char *)(lVar3 + 10) != '\0')) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + 0x10);
    puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x20) + 0x10);
    *puVar5 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar4 + 0x18);
    if (((*(byte *)(lVar4 + 0x18) >> 6 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar3 + 0x20) + 9) >> 5 & 1) != 0)) {
      if ((*(byte *)(*(long *)(lVar4 + 0x10) + 9) & 0x18) != 0) {
        FUN_00129d70(param_1);
      }
    }
  }
  return iVar2;
}


