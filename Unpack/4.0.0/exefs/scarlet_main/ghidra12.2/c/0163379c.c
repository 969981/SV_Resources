/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163379c; name: FUN_0163379c
 */


void FUN_0163379c(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_68;
  undefined1 local_60;
  long *local_58;
  long local_50;
  undefined2 local_48;
  undefined1 auStack_28 [8];
  
  lVar3 = param_3[3];
  lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x260);
  uVar2 = FUN_0163391c(*(undefined8 *)(lVar4 + 0x38),lVar3,param_3[1]);
  if ((uVar2 & 1) != 0) {
    FUN_01636f20(lVar4,lVar3);
  }
  lVar3 = param_3[3];
  if ((char)param_3[4] != '\0') {
    uVar1 = *(undefined1 *)(param_3[2] + 5);
    local_68 = *(long *)*param_3;
    local_48 = *(undefined2 *)(param_3[1] + 2);
    local_60 = uVar1;
    local_58 = &local_50;
    local_50 = lVar3;
    FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),auStack_28,&local_68);
    lVar3 = param_3[3];
    if (1 < *(byte *)(param_3 + 4)) {
      local_68 = *(long *)(*param_3 + 8);
      local_48 = *(undefined2 *)(param_3[1] + 2);
      local_60 = uVar1;
      local_58 = &local_50;
      local_50 = lVar3;
      FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),auStack_28,&local_68);
      lVar3 = param_3[3];
      if (2 < *(byte *)(param_3 + 4)) {
        uVar2 = 2;
        do {
          local_68 = *(long *)(*param_3 + uVar2 * 8);
          local_48 = *(undefined2 *)(param_3[1] + 2);
          local_60 = uVar1;
          local_58 = &local_50;
          local_50 = lVar3;
          FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),auStack_28,&local_68);
          uVar2 = uVar2 + 1;
          lVar3 = param_3[3];
        } while (uVar2 < *(byte *)(param_3 + 4));
      }
    }
  }
  local_60 = 1;
  local_58 = (long *)0x0;
  local_68 = lVar3;
  FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),&local_50,&local_68);
  return;
}


