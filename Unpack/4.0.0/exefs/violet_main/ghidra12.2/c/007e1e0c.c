/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e1e0c; name: FUN_007e1e0c
 */


void FUN_007e1e0c(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar7 = local_60;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  uVar4 = FUN_0078a12c();
  puVar5 = (undefined4 *)FUN_007bf9f0(0x50,uVar4);
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 0xf0) = 0;
    local_60[0] = 0x10401;
  }
  else {
    *puVar5 = 0;
    uVar3 = param_3 * 0x70;
    uVar9 = (ulong)uVar3;
    *(undefined8 *)(puVar5 + 2) = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    puVar5[0xe] = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined1 *)(puVar5 + 0x12) = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined4 **)(param_2 + 0xf0) = puVar5;
    uVar4 = FUN_0078a12c();
    lVar6 = FUN_007bfa40(uVar9,uVar4,8);
    if ((uVar3 != 0) && (lVar6 != 0)) {
      uVar8 = 0;
      do {
        *(undefined4 *)(lVar6 + uVar8) = 0;
        uVar8 = uVar8 + 4;
      } while (uVar9 != uVar8);
      *(long *)(param_2 + 0xf8) = lVar6;
LAB_007e1ee4:
      iVar1 = param_3 << 1;
      FUN_007e3d18(local_60,*(undefined8 *)(param_2 + 0xf0),lVar6,uVar3,iVar1,param_3,0);
      FUN_018ff39c(local_50,local_60);
      if (local_50[0] == 0) {
        uVar4 = FUN_0078a12c();
        puVar5 = (undefined4 *)FUN_007bf9f0(0x50,uVar4);
        if (puVar5 == (undefined4 *)0x0) {
          *(undefined8 *)(param_2 + 0x100) = 0;
          goto LAB_007e20a4;
        }
        *puVar5 = 0;
        puVar5[0xe] = 0;
        uVar2 = param_3 * 0x88;
        *(undefined8 *)(puVar5 + 2) = 0;
        *(undefined8 *)(puVar5 + 4) = 0;
        *(undefined1 *)(puVar5 + 0xf) = 0;
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(undefined1 *)(puVar5 + 0x12) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 10) = 0;
        *(undefined8 *)(puVar5 + 0xc) = 0;
        *(undefined4 **)(param_2 + 0x100) = puVar5;
        uVar4 = FUN_0078a12c();
        lVar6 = FUN_007bfa40((ulong)uVar2,uVar4,8);
        if ((uVar2 == 0) || (lVar6 == 0)) {
          *(long *)(param_2 + 0x108) = lVar6;
          if (lVar6 == 0) goto LAB_007e20a4;
        }
        else {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar6 + uVar8) = 0;
            uVar8 = uVar8 + 4;
          } while (uVar2 != uVar8);
          *(long *)(param_2 + 0x108) = lVar6;
        }
        FUN_007e20e8(local_60,*(undefined8 *)(param_2 + 0x100),lVar6,uVar2,iVar1,param_3,
                     &LAB_007e2290);
        FUN_018ff39c(local_50,local_60);
        if (local_50[0] == 0) {
          uVar4 = FUN_0078a12c();
          puVar5 = (undefined4 *)FUN_007bf9f0(0x50,uVar4);
          if (puVar5 == (undefined4 *)0x0) {
            *(undefined8 *)(param_2 + 0x110) = 0;
            goto LAB_007e20a4;
          }
          *puVar5 = 0;
          puVar5[0xe] = 0;
          *(undefined1 *)(puVar5 + 0xf) = 0;
          *(undefined8 *)(puVar5 + 0x10) = 0;
          *(undefined1 *)(puVar5 + 0x12) = 0;
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          *(undefined8 *)(puVar5 + 8) = 0;
          *(undefined8 *)(puVar5 + 10) = 0;
          *(undefined8 *)(puVar5 + 0xc) = 0;
          *(undefined4 **)(param_2 + 0x110) = puVar5;
          uVar4 = FUN_0078a12c();
          lVar6 = FUN_007bfa40(uVar9,uVar4,8);
          if ((uVar3 == 0) || (lVar6 == 0)) {
            *(long *)(param_2 + 0x118) = lVar6;
            if (lVar6 == 0) goto LAB_007e20a4;
          }
          else {
            uVar8 = 0;
            do {
              *(undefined4 *)(lVar6 + uVar8) = 0;
              uVar8 = uVar8 + 4;
            } while (uVar9 != uVar8);
            *(long *)(param_2 + 0x118) = lVar6;
          }
          FUN_007e4120(local_60,*(undefined8 *)(param_2 + 0x110),lVar6,uVar3,iVar1,param_3,0);
          FUN_018ff39c(local_50,local_60);
          if (local_50[0] == 0) {
            local_60[0] = 0;
            goto LAB_007e20b8;
          }
        }
      }
      piVar7 = local_50;
      goto LAB_007e20c8;
    }
    *(long *)(param_2 + 0xf8) = lVar6;
    if (lVar6 != 0) goto LAB_007e1ee4;
LAB_007e20a4:
    local_60[0] = 0x10401;
  }
LAB_007e20b8:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
LAB_007e20c8:
  FUN_00cbd7c0(param_1,piVar7);
  return;
}


