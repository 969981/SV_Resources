/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02906554; name: FUN_02906554
 */


undefined8 FUN_02906554(long param_1)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((5 < bVar1) ||
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55),
     (uVar3 & 1) == 0)) {
    cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((cVar2 == '\x06') &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar3 & 1) != 0)) {
      return 0xffffffff;
    }
    if ((*(short *)(param_1 + 0xb6) != 0x40) ||
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32),
       (uVar3 & 1) == 0)) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x4e), (uVar3 & 1) == 0)) {
        return 0;
      }
      return 3;
    }
  }
  return 0xfffffffe;
}


