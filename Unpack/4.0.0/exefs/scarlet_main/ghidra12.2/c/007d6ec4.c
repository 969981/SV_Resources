/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d6ec4; name: FUN_007d6ec4
 */


undefined8 FUN_007d6ec4(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_50;
  undefined2 local_48;
  
  puVar5 = PTR_DAT_047d0a08;
  puVar4 = PTR_DAT_047d0860;
  lVar1 = *(long *)PTR_DAT_047d0860 + 0x10;
  iVar6 = FUN_007cdd90(*(undefined8 *)PTR_DAT_047d0a08);
  local_78 = param_2;
  if (iVar6 == 2) {
    FUN_007965ac(&local_70,param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined2 *)(param_2 + 0x38);
    uVar7 = FUN_007ed1b8(lVar1,0x98);
    uVar9 = 5;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x359);
    uVar8 = FUN_007cdca4(*(undefined8 *)puVar5,*(undefined8 *)(param_2 + 0x30));
    if ((uint)bVar2 + (uVar8 & 0xffff) <= (uint)*(ushort *)(*(long *)puVar5 + 8)) {
      if ((ulong)*(ushort *)(*(long *)puVar4 + 0x50) == 0) {
        uVar12 = 0xfd;
      }
      else {
        uVar10 = 0;
        uVar12 = 0xfd;
        do {
          if (*(char *)(*(long *)(param_1 + 0x788) + uVar10) == '\0') {
            uVar12 = uVar10 & 0xffffffff;
            break;
          }
          uVar10 = uVar10 + 1;
        } while (*(ushort *)(*(long *)puVar4 + 0x50) != uVar10);
      }
      uVar9 = FUN_01f7c4e8();
      FUN_007e3854(uVar9,param_2,uVar12);
      if (((uint)uVar12 & 0xff) < (uint)*(ushort *)(*(long *)puVar4 + 0x50)) {
        *(undefined1 *)(*(long *)(param_1 + 0x788) + (uVar12 & 0xff)) = 1;
      }
      FUN_007e0448(*(undefined8 *)PTR_DAT_047d11a0,param_2,uVar12);
      *(undefined1 *)(param_2 + 0x3a) = 2;
      local_78 = 0x10000000000;
      local_70 = (ulong)local_70._4_4_ << 0x20;
      FUN_007f72e0(*(undefined8 *)puVar4,&local_78);
      uVar12 = FUN_007d6714(param_1 + 0x868,*(undefined8 *)(param_2 + 0x30),
                            *(undefined2 *)(param_2 + 0x38));
      if ((uVar12 & 1) == 0) {
        if (*(code **)(param_1 + 0x778) != (code *)0x0) {
          local_78 = local_78 & 0xffffffff00000000;
          local_70 = param_2;
          (**(code **)(param_1 + 0x778))(&local_78);
        }
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x850);
        uVar12 = (ulong)uVar8;
        if ((int)uVar8 < 0x17) {
          if (0 < (int)uVar8) {
            plVar11 = (long *)(param_1 + 0x798);
            do {
              if (*plVar11 == *(long *)(param_2 + 0x30)) goto LAB_007d70d4;
              uVar12 = uVar12 - 1;
              plVar11 = plVar11 + 1;
            } while (uVar12 != 0);
          }
          *(long *)(param_1 + (long)(int)uVar8 * 8 + 0x798) = *(long *)(param_2 + 0x30);
          *(uint *)(param_1 + 0x850) = uVar8 + 1;
        }
LAB_007d70d4:
        FUN_007d5030(param_1);
      }
      *(undefined1 *)(param_1 + 0x792) = 1;
      local_78 = param_2;
      FUN_007965ac(&local_70,param_2 + 8);
      local_50 = *(undefined8 *)(param_2 + 0x30);
      local_48 = *(undefined2 *)(param_2 + 0x38);
      uVar3 = *(ushort *)(param_1 + 0xdc);
      iVar6 = uVar3 + 2;
      if (((uVar3 + 1 ^ 0xffffffff) & 0xffff) != 0) {
        iVar6 = uVar3 + 1;
      }
      uVar7 = FUN_007ed1b8(lVar1,0x98);
      FUN_007d6390(param_1,&local_78,1,iVar6,0,0x98,uVar7);
      return 1;
    }
    FUN_007965ac(&local_70,param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined2 *)(param_2 + 0x38);
    uVar7 = FUN_007ed1b8(lVar1,0x98);
    uVar9 = 4;
  }
  FUN_007d6390(param_1,&local_78,uVar9,0,0,0x98,uVar7);
  return 0;
}


