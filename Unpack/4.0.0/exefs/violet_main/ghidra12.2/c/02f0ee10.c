/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0ee10; name: FUN_02f0ee10
 */


bool FUN_02f0ee10(long param_1,int *param_2,int *param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_40 [16];
  undefined2 *local_30;
  uint local_28;
  undefined4 local_24;
  
  local_24 = 0;
  *param_2 = 0;
  *param_3 = 0;
  (**(code **)(*(long *)PTR_DAT_047e4050 + (ulong)*(byte *)(param_1 + 0x20) * 0x80 + 0x18))
            (param_1,auStack_40);
  if ((local_30 != (undefined2 *)0x0) && (local_28 != 0)) {
    puVar1 = (undefined2 *)((ulong)local_28 + (long)local_30);
    if (local_30 < puVar1) {
      iVar5 = 1;
      do {
        uVar6 = 3;
        lVar8 = 0x90;
        lVar9 = 0x10;
        switch(*local_30) {
        case 2:
        case 3:
          break;
        case 4:
          lVar8 = 0x70;
          break;
        case 5:
        case 0x18:
          goto switchD_02f0eea8_caseD_5;
        case 6:
        case 0x1c:
          lVar8 = 0x30;
          break;
        case 7:
          uVar6 = 1;
          goto LAB_02f0ef14;
        default:
          bVar2 = false;
          iVar7 = 0;
          bVar3 = false;
          *param_2 = *param_2 + iVar5;
          bVar4 = false;
          if (iVar5 != 0) goto LAB_02f0ef5c;
          goto LAB_02f0ef68;
        case 9:
        case 0xe:
        case 0xf:
          uVar6 = 1;
          lVar9 = 0x20;
          goto switchD_02f0eea8_caseD_5;
        case 10:
        case 0x11:
        case 0x17:
          lVar8 = 0x10;
          break;
        case 0xb:
        case 0x12:
          lVar8 = 0x20;
          break;
        case 0xc:
          uVar6 = 2;
          goto LAB_02f0ef14;
        case 0xd:
          uVar6 = (uint)*(byte *)((long)local_30 + 5);
LAB_02f0ef14:
          lVar9 = 0x10;
          goto switchD_02f0eea8_caseD_5;
        case 0x10:
          uVar6 = 1;
          lVar9 = 0x30;
switchD_02f0eea8_caseD_5:
          iVar7 = 0;
          local_30 = (undefined2 *)(lVar9 + (long)local_30);
          bVar3 = true;
          *param_3 = *param_3 + uVar6;
          bVar2 = true;
          goto LAB_02f0ef68;
        case 0x13:
          lVar8 = 0x60;
        }
        local_30 = (undefined2 *)(lVar8 + (long)local_30);
        *param_2 = *param_2 + 1;
        bVar4 = true;
LAB_02f0ef5c:
        bVar2 = bVar4;
        bVar3 = false;
        iVar7 = 1;
LAB_02f0ef68:
        if (iVar5 == 0) {
          bVar2 = bVar3;
        }
      } while ((local_30 < puVar1) && (iVar5 = iVar7, bVar2));
      if (!bVar2) {
        return false;
      }
    }
    if (*param_3 - 2U < 5) {
      return 0 < *param_2;
    }
  }
  return false;
}


