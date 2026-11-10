/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300d4b0; name: FUN_0300d4b0
 */


void FUN_0300d4b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long local_70;
  undefined8 local_68;
  
  plVar9 = *(long **)(param_1 + 8);
  local_70 = 0;
  local_68 = 0x8000000000000000;
  lVar10 = plVar9[1];
  uVar3 = *(uint *)((long)plVar9 + 0x2c);
  if ((int)plVar9[5] == 0) {
LAB_0300d53c:
    (**(code **)(**(long **)(*plVar9 + 0x4c0) + 0x40))
              (*(long **)(*plVar9 + 0x4c0),local_70,local_68 & 0xffffffff,4);
    (**(code **)(**(long **)(*plVar9 + 0x4c0) + 0x48))(*(long **)(*plVar9 + 0x4c0),4);
    lVar10 = plVar9[8];
    if (*(int *)(lVar10 + 0x20) != 0) {
      lVar11 = (long)*(int *)(lVar10 + 0x20) << 3;
      plVar8 = *(long **)(lVar10 + 0x18);
      do {
        FUN_03006dd8(*plVar8 + 0x48);
        lVar11 = lVar11 + -8;
        plVar8 = plVar8 + 1;
      } while (lVar11 != 0);
    }
    piVar7 = *(int **)(lVar10 + 0x530);
    if (*piVar7 < 0) {
      memset(*(void **)(piVar7 + 6),0xff,(long)piVar7[8] << 6);
      *piVar7 = 1;
    }
    FUN_03002774(plVar9[8],*(undefined8 *)(*plVar9 + 0x7f8));
    uVar12 = local_68;
    *(undefined4 *)(plVar9 + 0xc) = 0xffffffff;
    uVar4 = (ulong)local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < (long)uVar12) && (local_70 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_70,uVar4 << 2);
    }
    return;
  }
  uVar1 = uVar3 + 1;
  if ((~*(uint *)(lVar10 + 8) & 0xffffff) == 0) {
    uVar12 = 0;
    if (uVar1 < 2) {
      uVar3 = 0;
    }
    do {
      if (uVar3 == uVar12) goto LAB_0300d53c;
      uVar12 = uVar12 + 1;
    } while ((~*(uint *)(lVar10 + (uVar12 & 0xffffffff) * 0x10 + 8) & 0xffffff) == 0);
    if ((int)uVar12 == -1) goto LAB_0300d53c;
  }
  else {
    uVar12 = 0;
  }
  puVar2 = PTR_PTR_047d1a50 + 0x20;
  do {
    lVar11 = *(long *)(lVar10 + (uVar12 & 0xffffffff) * 0x10);
    uVar3 = *(uint *)(lVar11 + 0x148);
    uVar4 = (ulong)uVar3 & 0xffffff;
    if (((((uint)uVar4 != 0xffffff) && ((uint)uVar4 < *(uint *)(*(long *)(lVar11 + 0x138) + 0x40)))
        && (lVar6 = *(long *)(*(long *)(lVar11 + 0x138) + 0x38),
           (*(byte *)(lVar6 + uVar4 * 0xc0 + 0x54) & 3) != 0)) &&
       ((*(uint *)(lVar6 + uVar4 * 0xc0 + 0x50) == uVar3 &&
        ((*(byte *)(lVar6 + uVar4 * 0xc0 + 0x88) & 1) != 0)))) {
      lVar6 = (long)(int)local_68;
      if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
        FUN_02e814f8(&local_70,puVar2,lVar6 + 1);
        uVar3 = *(uint *)(lVar11 + 0x148);
      }
      *(uint *)(local_70 + (long)(int)local_68 * 4) = uVar3;
      local_68 = CONCAT44(local_68._4_4_,(int)(lVar6 + 1));
    }
    puVar5 = (uint *)(lVar10 + 8 + (ulong)((int)uVar12 + 1) * 0x10);
    do {
      uVar3 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar3;
      if (uVar1 <= uVar3) goto LAB_0300d53c;
      uVar3 = *puVar5;
      puVar5 = puVar5 + 4;
    } while ((~uVar3 & 0xffffff) == 0);
  } while( true );
}


