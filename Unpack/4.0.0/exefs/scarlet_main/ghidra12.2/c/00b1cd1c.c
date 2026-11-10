/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b1cd1c; name: FUN_00b1cd1c
 */


uint FUN_00b1cd1c(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_68 [4];
  undefined8 local_48;
  int local_28 [2];
  
  cVar1 = (char)param_2;
  FUN_016947d8(local_68);
  local_28[0] = 9;
  if (local_68[0] == (undefined8 *)0x0) {
    uVar4 = 0;
    lVar5 = 0;
  }
  else {
    FUN_00e5f2bc(&local_48,local_28,local_68[0] + 1);
    if (cVar1 < -0x40) {
      param_2 = 0xffffff84;
    }
    lVar3 = FUN_0111b030(param_2);
    lVar5 = local_68[0][3];
    if (lVar3 + lVar5 + 2U <= (ulong)local_68[0][2]) {
      *(undefined1 *)(local_68[0][1] + lVar5) = 0xb9;
      local_68[0][3] = local_68[0][3] + 1;
      local_48 = 1;
      FUN_0111b0ac(local_28,&local_48,local_68[0] + 1);
      if (local_28[0] == 0) {
        *(char *)(local_68[0][1] + local_68[0][3]) = (char)param_2;
        lVar5 = local_68[0][3] + 1;
        local_68[0][3] = lVar5;
        if ((param_2 & 0xff) == 0x84) {
          *(char *)(local_68[0][1] + lVar5) = cVar1;
          lVar5 = local_68[0][3] + 1;
          local_68[0][3] = lVar5;
        }
      }
      else {
        local_28[0] = 0;
        lVar5 = local_68[0][3];
      }
    }
    uVar4 = *local_68[0];
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))(*(long **)(param_1 + 0xd0),uVar4,lVar5);
  FUN_01694aa8(local_68);
  return uVar2 & 1;
}


