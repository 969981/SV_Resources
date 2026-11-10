/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b80d4; name: FUN_018b80d4
 */


void FUN_018b80d4(long param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_6c [4];
  long local_68 [4];
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38 [2];
  
  if (((*(char *)(param_1 + 0x90) != '\0') ||
      ((*(long *)(param_1 + 0x78) != 0 && (*(short *)(*(long *)(param_1 + 0x78) + 0x1a) != 0)))) &&
     (puVar5 = *(undefined8 **)(param_1 + 0x88), puVar5 != (undefined8 *)0x0)) {
    local_3c = param_2;
    local_48 = FUN_017516e8();
    cVar1 = FUN_00f41720(&local_48);
    if (cVar1 != '\x02') {
      FUN_016947d8(local_68);
      local_6c[0] = 6;
      if (((local_68[0] != 0) && (FUN_011dbce8(local_38,local_6c,local_68[0] + 8), local_68[0] != 0)
          ) && (FUN_018b820c(local_38,&local_3c,local_68[0] + 8), local_68[0] != 0)) {
        lVar2 = FUN_0111b030(param_3 & 1);
        if ((ulong)(*(long *)(local_68[0] + 0x18) + lVar2) <= *(ulong *)(local_68[0] + 0x10)) {
          *(byte *)(*(long *)(local_68[0] + 8) + *(long *)(local_68[0] + 0x18)) = param_3 & 1;
          *(long *)(local_68[0] + 0x18) = *(long *)(local_68[0] + 0x18) + 1;
        }
      }
      local_38[0] = FUN_011dbca0(param_1);
      uVar3 = FUN_014c27b0(local_68);
      uVar4 = FUN_014c27c8(local_68);
      (**(code **)*puVar5)(puVar5,local_38,uVar3,uVar4);
      FUN_01694aa8(local_68);
    }
  }
  return;
}


