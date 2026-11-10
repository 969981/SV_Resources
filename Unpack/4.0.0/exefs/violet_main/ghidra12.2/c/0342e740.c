/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342e740; name: FUN_0342e740
 */


void FUN_0342e740(long param_1,uint param_2,uint param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x22;
  long lVar10;
  ulong uVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_047e6e68;
  do {
    if (param_2 == param_3) {
      return;
    }
    uVar2 = *(uint *)(param_5 + 0x20);
    uVar11 = (ulong)param_2;
    if (uVar2 == 0) {
      lVar7 = 0;
      lVar10 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + uVar11 * 0x40);
      uVar3 = 0;
      uVar6 = (uint)lVar7;
      if (uVar2 != 0) {
        uVar3 = uVar6 / uVar2;
      }
      for (lVar10 = *(long *)(*(long *)(param_5 + 0x18) + (ulong)(uVar6 - uVar3 * uVar2) * 8);
          (lVar10 != 0 && (*(long *)(lVar10 + 0x68) != lVar7)); lVar10 = *(long *)(lVar10 + 0x70)) {
      }
      lVar8 = *(long *)(param_1 + uVar11 * 0x40 + 8);
      uVar3 = 0;
      uVar6 = (uint)lVar8;
      if (uVar2 != 0) {
        uVar3 = uVar6 / uVar2;
      }
      for (lVar7 = *(long *)(*(long *)(param_5 + 0x18) + (ulong)(uVar6 - uVar3 * uVar2) * 8);
          lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x70)) {
        if (*(long *)(lVar7 + 0x68) == lVar8) {
          if (lVar10 != 0) {
            if ((*(uint *)(lVar10 + 0x58) != 0) && (*(uint *)(lVar7 + 0x58) != 0)) {
              plVar5 = *(long **)(lVar10 + 0x50);
              plVar1 = plVar5 + *(uint *)(lVar10 + 0x58);
              do {
                unaff_x22 = *plVar5;
                lVar8 = (ulong)*(uint *)(lVar7 + 0x58) << 3;
                plVar9 = *(long **)(lVar7 + 0x50);
                do {
                  if (unaff_x22 == *plVar9) goto LAB_0342e814;
                  lVar8 = lVar8 + -8;
                  plVar9 = plVar9 + 1;
                } while (lVar8 != 0);
                plVar5 = plVar5 + 1;
              } while (plVar5 != plVar1);
            }
            unaff_x22 = 0;
          }
          break;
        }
      }
    }
LAB_0342e814:
    lVar8 = param_1 + uVar11 * 0x40;
    FUN_0342cec0(lVar10,lVar7,unaff_x22,lVar8 + 0x10);
    local_64 = 0x447a0000;
    local_78 = *(uint *)(puVar4 + 0xc);
    local_70 = *(undefined4 *)(puVar4 + 0x10);
    uStack_6c = *(undefined4 *)PTR_DAT_047e6e78;
    local_88 = 0;
    uStack_80 = 0;
    if (3 < local_78) {
      local_78 = 4;
    }
    uStack_74 = 1;
    local_68 = 1;
    local_67 = puVar4[0x19];
    FUN_03434d00(&local_88,lVar10,lVar7,unaff_x22,lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x38) != 0) {
      lVar10 = *(long *)(lVar8 + 0x30);
      do {
        FUN_03426968(lVar10);
        lVar10 = lVar10 + 0x94;
      } while (lVar10 != *(long *)(lVar8 + 0x30) + (ulong)*(uint *)(lVar8 + 0x38) * 0x94);
    }
    param_2 = param_2 + 1;
  } while( true );
}


