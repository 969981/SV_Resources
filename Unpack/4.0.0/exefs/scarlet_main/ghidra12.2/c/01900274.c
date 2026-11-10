/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01900274; name: FUN_01900274
 */


void FUN_01900274(undefined8 param_1,long param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  void *__s;
  ulong uVar9;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (param_3 == -1) {
    local_50[0] = 0x10407;
  }
  else {
    uVar5 = param_3 + 1;
    uVar9 = (ulong)uVar5;
    *(uint *)(param_2 + 0x68) = uVar5;
    uVar3 = FUN_0078a12c();
    lVar4 = FUN_007bf9f0((uVar9 + (ulong)uVar5 * 2) * 8,uVar3);
    if (lVar4 != 0) {
      __s = (void *)(lVar4 + 0x10);
      do {
        memset(__s,0,4);
        *(undefined2 *)((long)__s + -0x10) = 0;
        *(undefined8 *)((long)__s + -8) = 0;
        memset(__s,0,4);
        uVar9 = uVar9 - 1;
        __s = (void *)((long)__s + 0x18);
      } while (uVar9 != 0);
    }
    puVar2 = PTR_DAT_047d0860;
    *(long *)(param_2 + 0x60) = lVar4;
    uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
    uVar9 = (ulong)uVar1;
    uVar3 = FUN_0078a12c();
    lVar4 = FUN_007bf9f0(uVar9,uVar3);
    if (lVar4 == 0) {
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    else {
      if (uVar1 != 0) {
        uVar6 = uVar9 & 3;
        if (uVar9 - 1 < 3) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            *(undefined4 *)(lVar4 + uVar7) = 0;
            uVar7 = uVar7 + 4;
          } while ((uVar9 & 0xfffc) != uVar7);
        }
        if ((uVar1 & 3) != 0) {
          puVar8 = (undefined1 *)(lVar4 + uVar7);
          do {
            uVar6 = uVar6 - 1;
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          } while (uVar6 != 0);
        }
      }
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(long *)(param_2 + 0x78) = lVar4;
      uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
      if (uVar1 != 0) {
        uVar5 = (uint)uVar1;
        if (uVar1 < 2) {
          uVar5 = 1;
        }
        uVar6 = (ulong)uVar5;
        uVar9 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            *(undefined4 *)(lVar4 + uVar7) = 0;
            uVar7 = uVar7 + 4;
          } while ((uVar6 & 0xfffc) != uVar7);
        }
        if ((uVar5 & 3) != 0) {
          puVar8 = (undefined1 *)(lVar4 + uVar7);
          do {
            uVar9 = uVar9 - 1;
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          } while (uVar9 != 0);
        }
      }
    }
    local_50[0] = 0;
    *(int *)(PTR_DAT_047d0868 + 0x3f0) = param_3;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


