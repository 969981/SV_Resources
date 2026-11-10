/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001db818; name: FUN_001db818
 */


void FUN_001db818(long param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_8f8 [128];
  char acStack_854 [2044];
  undefined1 uStack_58;
  undefined1 auStack_57 [7];
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0)) {
    uVar1 = FUN_001cd240(acStack_854,0x801,param_2,auStack_8f8 + 0x80);
    if (0x800 < uVar1) {
      sVar2 = strlen(param_2);
      if (param_2[sVar2 - 1] == '\n') {
        puVar3 = &uStack_58;
        puVar5 = &DAT_03bd8d9f;
        uVar4 = 5;
      }
      else {
        puVar3 = auStack_57;
        puVar5 = &DAT_03c5a86f;
        uVar4 = 4;
      }
      FUN_001ce394(puVar3,uVar4,puVar5);
    }
    sVar2 = strlen(acStack_854);
    FUN_001db920(param_1,0,acStack_854,sVar2);
  }
  return;
}


