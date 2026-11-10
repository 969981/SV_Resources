/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038bb80; name: FUN_0038bb80
 */


undefined8 * FUN_0038bb80(long param_1,void *param_2,size_t param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_4 + 0xfU & 0xfffffffffffffff0;
  __dest = *(undefined8 **)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)__dest) < uVar5) {
    uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x28) << 1);
    uVar2 = uVar5;
    if (uVar5 <= uVar4) {
      uVar2 = uVar4;
    }
    lVar1 = uVar2 + 0x10;
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_1 + 0x20))
                       (*(undefined8 **)(param_1 + 0x20),0,0,lVar1);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(puVar3 + 1) = (int)lVar1;
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    *(undefined8 **)(param_1 + 0x38) = puVar3;
    *(int *)(param_1 + 0x28) = (int)lVar1;
    if (*(long *)(param_1 + 0x40) == 0) {
      *(undefined8 **)(param_1 + 0x40) = puVar3;
    }
    __dest = puVar3 + 2;
    *(undefined4 **)(param_1 + 0x18) = (undefined4 *)((long)puVar3 + 0xc);
    *(undefined8 **)(param_1 + 8) = __dest;
    *(long *)(param_1 + 0x10) = (long)puVar3 + lVar1;
    *(ulong *)(param_1 + 8) = (long)__dest + uVar5;
  }
  else {
    *(ulong *)(param_1 + 8) = (long)__dest + uVar5;
  }
  if ((param_3 != 0) && (__dest != (undefined8 *)0x0)) {
    memcpy(__dest,param_2,param_3);
  }
  return __dest;
}


