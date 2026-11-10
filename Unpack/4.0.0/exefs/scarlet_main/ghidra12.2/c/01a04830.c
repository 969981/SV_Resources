/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a04830; name: FUN_01a04830
 */


undefined4 FUN_01a04830(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar2);
  if (cVar1 == '\x02') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar2 = 0xfffffffe;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_01a048b4(param_1);
  return uVar2;
}


