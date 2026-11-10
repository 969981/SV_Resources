/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0c1d8; name: FUN_02f0c1d8
 */


void FUN_02f0c1d8(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long local_78;
  long lStack_70;
  undefined1 local_68;
  
  lVar4 = param_1[7];
  uVar7 = *(uint *)((long)param_1 + 0x5c);
  if ((int)param_1[0xb] == 0) {
    return;
  }
  uVar1 = uVar7 + 1;
  if (*(int *)(lVar4 + 0x14) == 0x7fffffff) {
    uVar6 = 0;
    if (uVar1 < 2) {
      uVar7 = 0;
    }
    do {
      if (uVar7 == uVar6) {
        return;
      }
      uVar6 = uVar6 + 1;
    } while (*(int *)(lVar4 + (uVar6 & 0xffffffff) * 0x38 + 0x14) == 0x7fffffff);
    if ((int)uVar6 == -1) {
      return;
    }
  }
  else {
    uVar6 = 0;
  }
  do {
    lVar8 = *param_1;
    lStack_70 = lVar8 + 0x140;
    local_68 = 0xff;
    puVar9 = (uint *)(lVar4 + (uVar6 & 0xffffffff) * 0x38 + 0x1c);
    uVar2 = 0xff;
    if (*puVar9 != 0) {
      iVar3 = *(int *)(lVar4 + (uVar6 & 0xffffffff) * 0x38 + 0x18);
      uVar7 = 0;
      local_78 = lVar8;
      do {
        lVar5 = *(long *)(*(long *)(lVar8 + 0x488) + 8) + (long)iVar3 * 0x68;
        iVar3 = *(int *)(lVar5 + 0x38);
        FUN_02f0c32c(&local_78,*(undefined4 *)(lVar5 + 8));
        FUN_02f0c32c(&local_78,*(undefined4 *)(lVar5 + 0x18));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar9);
      uVar2 = local_68;
    }
    *(undefined1 *)(lVar4 + (uVar6 & 0xffffffff) * 0x38 + 0x21) = uVar2;
    do {
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar7;
      if (uVar1 <= uVar7) {
        return;
      }
    } while (*(int *)(lVar4 + (ulong)uVar7 * 0x38 + 0x14) == 0x7fffffff);
  } while( true );
}


