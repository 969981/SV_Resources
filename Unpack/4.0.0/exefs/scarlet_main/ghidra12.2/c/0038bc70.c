/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038bc70; name: FUN_0038bc70
 */


undefined8 * FUN_0038bc70(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((param_2 & 0xfffffffffffffff8) < 0x48) {
    if (param_3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)(*(code *)*param_3)(param_3,0,0,0x158);
    uVar2 = DAT_03cb5408;
    puVar3 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[0x29] = puVar4;
      puVar4[0x2a] = puVar4;
      puVar3 = puVar4 + 0x22;
      puVar4[0x28] = puVar3;
      puVar4[0x24] = puVar3;
      puVar4[1] = uVar2;
      uVar2 = DAT_03cb56d8;
      puVar4[0x22] = FUN_0038bb80;
      puVar4[0x23] = puVar4 + 2;
      puVar4[0x27] = uVar2;
      puVar4[0x25] = (long)puVar4 + 0xc;
      puVar4[0x26] = param_3;
      return puVar3;
    }
  }
  else {
    lVar1 = (param_2 & 0xfffffffffffffff8) + param_1;
    puVar3 = (undefined8 *)(lVar1 + -0x48);
    *puVar3 = FUN_0038bb80;
    *(undefined8 *)(lVar1 + -0x20) = DAT_03cb5688;
    *(long *)(lVar1 + -0x40) = param_1;
    *(undefined8 **)(lVar1 + -0x38) = puVar3;
    *(undefined8 **)(lVar1 + -0x18) = puVar3;
    *(undefined8 *)(lVar1 + -0x10) = 0;
    *(undefined8 *)(lVar1 + -0x30) = 0;
    *(undefined8 **)(lVar1 + -0x28) = param_3;
  }
  return puVar3;
}


