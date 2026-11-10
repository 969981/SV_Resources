/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f327fc; name: FUN_00f327fc
 */


void FUN_00f327fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__dest;
  void *pvVar4;
  
  __dest = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0xaa0,8);
  pvVar4 = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x158,8);
  FUN_00f329b4(*(undefined8 *)(param_2 + 0x440),pvVar4);
  memcpy(__dest,pvVar4,0x158);
  pvVar4 = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x158,8);
  FUN_00f329b4(*(undefined8 *)(param_2 + 0x448),pvVar4);
  memcpy((void *)((long)__dest + 0x158),pvVar4,0x158);
  pvVar4 = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x158,8);
  FUN_00f329b4(*(undefined8 *)(param_2 + 0x450),pvVar4);
  memcpy((void *)((long)__dest + 0x2b0),pvVar4,0x158);
  pvVar4 = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x158,8);
  FUN_00f329b4(*(undefined8 *)(param_2 + 0x458),pvVar4);
  memcpy((void *)((long)__dest + 0x408),pvVar4,0x158);
  pvVar4 = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x158,8);
  FUN_00f329b4(*(undefined8 *)(param_2 + 0x50),pvVar4);
  memcpy((void *)((long)__dest + 0x560),pvVar4,0x158);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)((long)__dest + 0x6b8) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)((long)__dest + 0x6d0) = uVar2;
  *(undefined8 *)((long)__dest + 0x6c8) = uVar1;
  *(undefined8 *)((long)__dest + 0x6c0) = uVar3;
  memcpy((void *)((long)__dest + 0x6d8),(void *)(param_2 + 0x78),0x3c8);
  FUN_01692b7c(param_1,param_2,__dest,0xaa0,param_3,1);
  return;
}


