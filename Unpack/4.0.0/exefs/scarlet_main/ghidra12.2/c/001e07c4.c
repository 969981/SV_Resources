/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e07c4; name: FUN_001e07c4
 */


undefined8 * FUN_001e07c4(long param_1,int param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_3 == 0) {
    puVar2 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_001e05e8(0,0);
    lVar3 = puVar2[4];
    if ((param_1 < lVar3) || ((param_1 <= lVar3 && (param_2 < *(int *)(puVar2 + 5))))) {
      puVar4 = puVar2;
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)puVar2[2];
      if (puVar4 == puVar2) {
        puVar4 = (undefined8 *)puVar2[1];
      }
      else {
        uVar1 = puVar2[5];
        puVar4[4] = puVar2[4];
        puVar4[5] = uVar1;
        puVar4[1] = puVar2[1];
        *puVar4 = *puVar2;
        puVar4[3] = puVar2[3];
        *(undefined8 **)(puVar2[3] + 0x10) = puVar4;
      }
    }
  }
  *param_4 = (long)puVar2;
  return puVar4;
}


