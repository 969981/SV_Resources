/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c41790; name: FUN_00c41790
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_00c41790(long param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  ulong local_8;
  
  local_8 = 0;
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      puVar3 = (ulong *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_00c41818;
    }
    if (param_2 == 0xfff0b9d8) {
      puVar3 = (ulong *)(*(long *)(param_1 + 0x18) + 0x40);
      cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00c41808;
    }
    plVar4 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar4[1] != '\x16') &&
       (lVar5 = *plVar4, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar5 + 10))) {
      lVar5 = lVar5 + (ulong)(~param_2 - 0xf4628) * 0x10;
      puVar3 = (ulong *)(lVar5 + 0x20);
      cVar1 = *(char *)(lVar5 + 0x28);
      goto joined_r0x00c41808;
    }
  }
  else {
    puVar3 = (ulong *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (puVar3 < *(ulong **)(param_1 + 0x10)) {
LAB_00c41818:
      cVar1 = (char)puVar3[1];
      goto joined_r0x00c41808;
    }
  }
  puVar3 = (ulong *)(*(long *)(param_1 + 0x18) + 0x50);
  cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x58);
joined_r0x00c41808:
  if (cVar1 == '\x13') {
    local_8 = *puVar3;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0013fe10(puVar3,&local_8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_8;
  return auVar6;
}


