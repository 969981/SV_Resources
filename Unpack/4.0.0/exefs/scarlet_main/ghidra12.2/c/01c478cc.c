/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c478cc; name: FUN_01c478cc
 */


void FUN_01c478cc(long *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uStack_29;
  undefined7 uStack_28;
  
  lVar5 = *param_1;
  puVar4 = (undefined8 *)FUN_01c48984(param_3);
  uVar1 = *puVar4;
  uVar3 = puVar4[1];
  uVar2 = puVar4[2];
  uStack_29 = (undefined1)((ulong)uVar2 >> 0x38);
  uStack_28 = (undefined7)puVar4[3];
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    puVar4 = (undefined8 *)(*(long *)(param_2 + 8) + lVar5);
    *(ulong *)((long)puVar4 + 0x17) = CONCAT71(uStack_28,uStack_29);
    puVar4[1] = uVar3;
    puVar4[2] = uVar2;
    *puVar4 = uVar1;
  }
  return;
}


