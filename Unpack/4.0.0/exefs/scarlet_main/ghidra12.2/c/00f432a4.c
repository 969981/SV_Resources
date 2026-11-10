/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f432a4; name: FUN_00f432a4
 */


uint FUN_00f432a4(long param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_b0 [48];
  undefined1 local_80 [16];
  undefined1 auStack_70 [48];
  
  if (((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_2 + 4) == 0)) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 4) + 0x10), lVar3 == 0)) {
    uVar2 = 1;
  }
  else {
    local_80[0] = 0;
    FUN_01667884(auStack_70);
    local_80[0] = *(undefined1 *)(param_2 + 0x40);
    FUN_015f8734(*(undefined8 *)(lVar3 + 0x98),*(undefined8 *)(lVar3 + 0xa8),
                 *(undefined8 *)(lVar3 + 0xb8),auStack_b0);
    memcpy(auStack_70,auStack_b0,0x30);
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x58) = 2;
    *(undefined2 *)(param_1 + 0x5a) = uVar1;
    memcpy((void *)(param_1 + 0x5c),local_80,0x40);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x68))
                      (*(long **)(param_1 + 0x48),(undefined1 *)(param_1 + 0x58),0x44,param_3);
  }
  return uVar2 & 1;
}


