/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020eb594; name: FUN_020eb594
 */


char FUN_020eb594(long param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  sVar3 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
  cVar4 = '\x02';
  if (sVar2 == 0) {
    cVar4 = '\x01';
  }
  cVar1 = sVar2 != 0;
  if (sVar3 != 0) {
    cVar1 = cVar4;
  }
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
  if (sVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
  if (sVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


