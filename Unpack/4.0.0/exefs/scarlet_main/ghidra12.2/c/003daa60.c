/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003daa60; name: FUN_003daa60
 */


long FUN_003daa60(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [48];
  
  *param_2 = 0x73;
  if ((*(code **)(param_1 + 0x8c8) != (code *)0x0) &&
     (lVar2 = (**(code **)(param_1 + 0x8c8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8c0)),
     (int)lVar2 != 0)) {
    return lVar2;
  }
  *param_2 = 0x50;
  if (((*(long *)(param_1 + 0x8e8) == 0) ||
      (((*(long *)(param_1 + 0x8f0) == 0 || (*(long *)(param_1 + 0x8f8) == 0)) ||
       (*(long *)(param_1 + 0x920) == 0)))) || (iVar1 = FUN_00464e30(auStack_50,0x30), iVar1 < 1)) {
    return 2;
  }
  uVar3 = FUN_003eba50(auStack_50,0x30,0);
  *(undefined8 *)(param_1 + 0x918) = uVar3;
  FUN_00453300(auStack_50,0x30);
  lVar2 = FUN_0047d150(*(undefined8 *)(param_1 + 0x918),*(undefined8 *)(param_1 + 0x8e8),
                       *(undefined8 *)(param_1 + 0x8f0),*(undefined8 *)(param_1 + 0x920));
  *(long *)(param_1 + 0x900) = lVar2;
  return (ulong)(lVar2 == 0) << 1;
}


