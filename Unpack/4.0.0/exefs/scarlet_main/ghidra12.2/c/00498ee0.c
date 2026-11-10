/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00498ee0; name: FUN_00498ee0
 */


void FUN_00498ee0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  byte *pbVar12;
  int local_3c;
  int local_38;
  int local_34;
  
  if (*(int *)(param_1 + 0x158) != 0) {
    return;
  }
  FUN_0047e5e0(*(undefined8 *)(param_1 + 0x150));
  if ((*(byte *)(param_1 + 0xe1) & 1) != 0) goto LAB_00499660;
  puVar1 = (uint *)(param_1 + 0xe0);
  uVar5 = FUN_0043c280();
  iVar3 = FUN_0048abe0(param_1,uVar5,param_1 + 0x130,0);
  if (iVar3 == 0) {
    *puVar1 = *puVar1 | 0x100080;
    lVar6 = FUN_00485d10(param_1);
  }
  else {
    lVar6 = FUN_00485d10(param_1);
  }
  if (lVar6 == 0) {
    *puVar1 = *puVar1 | 0x40;
  }
  piVar7 = (int *)FUN_004843e0(param_1,0x57,&local_3c,0);
  if (piVar7 == (int *)0x0) {
    if (local_3c != -1) {
      uVar11 = 0x80;
      goto LAB_00499000;
    }
  }
  else {
    if (*piVar7 != 0) {
      *puVar1 = *puVar1 | 0x10;
    }
    if (*(long *)(piVar7 + 2) == 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
    }
    else {
      if (*(int *)(*(long *)(piVar7 + 2) + 4) != 0x102) {
        lVar6 = FUN_003e10b0();
        *(long *)(param_1 + 0xd0) = lVar6;
        if ((lVar6 == 0) || (*piVar7 != 0)) goto LAB_00498ff4;
      }
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x80;
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
LAB_00498ff4:
    FUN_00495d40(piVar7);
    uVar11 = 1;
LAB_00499000:
    *puVar1 = *puVar1 | uVar11;
  }
  plVar8 = (long *)FUN_004843e0(param_1,0x297,&local_3c,0);
  if (plVar8 == (long *)0x0) {
    if (local_3c != -1) {
      uVar11 = 0x80;
      goto LAB_0049909c;
    }
  }
  else {
    if ((((*(byte *)puVar1 >> 4 & 1) != 0) ||
        (iVar3 = FUN_004843c0(param_1,0x55,0xffffffff), -1 < iVar3)) ||
       (iVar3 = FUN_004843c0(param_1,0x56,0xffffffff), -1 < iVar3)) {
      *puVar1 = *puVar1 | 0x80;
    }
    if (*plVar8 == 0) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar5 = FUN_003e10b0();
    }
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    FUN_004988e0(plVar8);
    uVar11 = 0x400;
LAB_0049909c:
    *puVar1 = *puVar1 | uVar11;
  }
  piVar7 = (int *)FUN_004843e0(param_1,0x53,&local_3c,0);
  if (piVar7 == (int *)0x0) {
    if (local_3c != -1) {
      *puVar1 = *puVar1 | 0x80;
    }
  }
  else {
    iVar3 = *piVar7;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      pbVar12 = *(byte **)(piVar7 + 2);
      bVar2 = *pbVar12;
      *(uint *)(param_1 + 0xe4) = (uint)bVar2;
      if (iVar3 != 1) {
        *(uint *)(param_1 + 0xe4) = (uint)CONCAT11(pbVar12[1],bVar2);
      }
    }
    *puVar1 = *puVar1 | 2;
    thunk_FUN_003df2e0();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  lVar6 = FUN_004843e0(param_1,0x7e,&local_3c,0);
  if (lVar6 == 0) {
    if (local_3c != -1) {
      *puVar1 = *puVar1 | 0x80;
    }
  }
  else {
    *puVar1 = *puVar1 | 4;
    local_3c = 0;
    iVar3 = FUN_0047e430();
    if (0 < iVar3) {
      do {
        FUN_0047e450(lVar6,local_3c);
        iVar3 = FUN_0045bea0();
        uVar11 = 1;
        switch(iVar3) {
        case 0x81:
          break;
        case 0x82:
          uVar11 = 2;
          break;
        case 0x83:
          uVar11 = 8;
          break;
        case 0x84:
          uVar11 = 4;
          break;
        case 0x85:
          uVar11 = 0x40;
          break;
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x8a:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x8f:
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x94:
        case 0x95:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0x99:
        case 0x9a:
        case 0x9b:
        case 0x9c:
        case 0x9d:
        case 0x9e:
        case 0x9f:
        case 0xa0:
        case 0xa1:
        case 0xa2:
        case 0xa3:
        case 0xa4:
        case 0xa5:
        case 0xa6:
        case 0xa7:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xaf:
        case 0xb0:
        case 0xb1:
        case 0xb2:
        case 0xb3:
          goto switchD_004991c0_caseD_86;
        case 0x89:
        case 0x8b:
          uVar11 = 0x10;
          break;
        case 0xb4:
          uVar11 = 0x20;
          break;
        default:
          if (iVar3 == 0x129) {
            uVar11 = 0x80;
          }
          else {
            if (iVar3 != 0x38e) goto switchD_004991c0_caseD_86;
            uVar11 = 0x100;
          }
        }
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | uVar11;
switchD_004991c0_caseD_86:
        iVar3 = local_3c + 1;
        local_3c = iVar3;
        iVar4 = FUN_0047e430(lVar6);
      } while (iVar3 < iVar4);
    }
    FUN_0047e3b0(lVar6,PTR_FUN_047cd538);
  }
  piVar7 = (int *)FUN_004843e0(param_1,0x47,&local_3c,0);
  if (piVar7 == (int *)0x0) {
    if (local_3c != -1) {
      *puVar1 = *puVar1 | 0x80;
    }
  }
  else {
    if (*piVar7 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)**(byte **)(piVar7 + 2);
    }
    *(uint *)(param_1 + 0xec) = uVar11;
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 8;
    thunk_FUN_003df2e0();
  }
  lVar6 = FUN_004843e0(param_1,0x52,&local_3c,0);
  *(long *)(param_1 + 0xf0) = lVar6;
  if ((lVar6 == 0) && (local_3c != -1)) {
    *puVar1 = *puVar1 | 0x80;
  }
  lVar6 = FUN_004843e0(param_1,0x5a,&local_3c,0);
  *(long *)(param_1 + 0xf8) = lVar6;
  if ((lVar6 == 0) && (local_3c != -1)) {
    *puVar1 = *puVar1 | 0x80;
  }
  uVar5 = FUN_00483b40(param_1);
  uVar9 = FUN_00483ac0(param_1);
  iVar3 = FUN_00483880(uVar5,uVar9);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x20;
    iVar3 = FUN_00499880(param_1,*(undefined8 *)(param_1 + 0xf8));
    if (iVar3 == 0) {
      uVar5 = FUN_00483c90(param_1);
      iVar3 = FUN_00499980(uVar5,param_1);
      if (iVar3 == 0) {
        *puVar1 = *puVar1 | 0x2000;
      }
    }
  }
  lVar6 = FUN_004843e0(param_1,0x55,&local_3c,0);
  *(long *)(param_1 + 0x110) = lVar6;
  if ((lVar6 == 0) && (local_3c != -1)) {
    *puVar1 = *puVar1 | 0x80;
  }
  lVar6 = FUN_004843e0(param_1,0x29a,&local_3c,0);
  *(long *)(param_1 + 0x118) = lVar6;
  if ((lVar6 == 0) && (local_3c != -1)) {
    *puVar1 = *puVar1 | 0x80;
  }
  lVar6 = FUN_004843e0(param_1,0x67,&local_38,0);
  *(long *)(param_1 + 0x108) = lVar6;
  if ((lVar6 == 0) && (local_38 != -1)) {
LAB_004993f4:
    *puVar1 = *puVar1 | 0x80;
  }
  else {
    local_38 = 0;
    iVar3 = FUN_0047e430();
    if (0 < iVar3) {
      do {
        puVar10 = (undefined8 *)FUN_0047e450(*(undefined8 *)(param_1 + 0x108),local_38);
        piVar7 = (int *)puVar10[1];
        if (piVar7 == (int *)0x0) {
          *(undefined4 *)(puVar10 + 3) = 0x807f;
          piVar7 = (int *)*puVar10;
        }
        else {
          iVar3 = *piVar7;
          if (iVar3 < 1) {
            uVar11 = *(uint *)(puVar10 + 3);
          }
          else {
            pbVar12 = *(byte **)(piVar7 + 2);
            bVar2 = *pbVar12;
            uVar11 = (uint)bVar2;
            *(uint *)(puVar10 + 3) = (uint)bVar2;
            if (iVar3 != 1) {
              uVar11 = (uint)CONCAT11(pbVar12[1],bVar2);
              *(uint *)(puVar10 + 3) = uVar11;
            }
          }
          *(uint *)(puVar10 + 3) = uVar11 & 0x807f;
          piVar7 = (int *)*puVar10;
        }
        if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
          iVar3 = FUN_0047e430(puVar10[2]);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              piVar7 = (int *)FUN_0047e450(puVar10[2],iVar3);
              if (*piVar7 == 4) {
                lVar6 = *(long *)(piVar7 + 2);
                if (lVar6 != 0) goto LAB_00499428;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_0047e430(puVar10[2]);
            } while (iVar3 < iVar4);
          }
          lVar6 = FUN_00483ac0(param_1);
LAB_00499428:
          iVar3 = FUN_004933c0(*puVar10,lVar6);
          if (iVar3 == 0) goto LAB_004993f4;
        }
        iVar3 = local_38 + 1;
        local_38 = iVar3;
        iVar4 = FUN_0047e430(*(undefined8 *)(param_1 + 0x108));
      } while (iVar3 < iVar4);
    }
  }
  lVar6 = FUN_004843e0(param_1,0x122,&local_3c,0);
  *(long *)(param_1 + 0x120) = lVar6;
  if ((lVar6 == 0) && (local_3c != -1)) {
    *puVar1 = *puVar1 | 0x80;
  }
  lVar6 = FUN_004843e0(param_1,0x123,&local_3c,0);
  *(long *)(param_1 + 0x128) = lVar6;
  if ((lVar6 == 0) && (local_3c != -1)) {
    *puVar1 = *puVar1 | 0x80;
  }
  local_3c = 0;
  iVar3 = FUN_004843b0(param_1);
  if (0 < iVar3) {
    do {
      uVar5 = FUN_004843d0(param_1,local_3c);
      FUN_00486000();
      iVar3 = FUN_0045bea0();
      if (iVar3 == 0x359) {
        *puVar1 = *puVar1 | 0x1000;
      }
      iVar3 = FUN_00486020(uVar5);
      if (iVar3 != 0) {
        FUN_00486000(uVar5);
        local_34 = FUN_0045bea0();
        if ((local_34 == 0) ||
           (lVar6 = FUN_0045c970(&local_34,&DAT_03d06630,0xe,4,&LAB_00499fc0), lVar6 == 0)) {
          *puVar1 = *puVar1 | 0x200;
          break;
        }
      }
      iVar3 = local_3c + 1;
      local_3c = iVar3;
      iVar4 = FUN_004843b0(param_1);
    } while (iVar3 < iVar4);
  }
  FUN_00485de0(param_1);
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x100;
  *(undefined4 *)(param_1 + 0x158) = 1;
LAB_00499660:
  FUN_0047e600(*(undefined8 *)(param_1 + 0x150));
  return;
}


