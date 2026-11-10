/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109c334; name: FUN_0109c334
 */


void FUN_0109c334(long param_1,long param_2,long param_3,uint param_4,byte param_5)

{
  ushort uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort local_68 [2];
  ushort local_64 [2];
  
  puVar2 = PTR_DAT_047d8ca0;
  puVar6 = *(ushort **)(param_3 + 0x30);
  do {
    while( true ) {
      for (; uVar8 = *puVar6, uVar8 != 0x10; puVar6 = puVar6 + 1) {
        if (uVar8 == 0) {
          return;
        }
        local_68[0] = uVar8;
        if ((param_5 & 1) == 0) {
          param_5 = 0;
        }
        else {
          param_5 = 1;
          if ((uVar8 != 0x1b) && (9 < uVar8 - 0x11)) {
            if (((*PTR_DAT_047d8c98 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047dae08,puVar2,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d8c98);
            }
            uVar5 = *(undefined8 *)puVar2;
            *(undefined8 *)PTR_DAT_047d8ca8 = uVar5;
            FUN_021722d4(uVar5,local_68);
            param_5 = 0;
          }
        }
        if (*(char *)(param_2 + 0x54) != '\0') {
          uVar8 = *(ushort *)(param_2 + 0x52);
          if (uVar8 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
            *(ushort *)(param_2 + 0x52) = uVar8 + 1;
            *(ushort *)(*(long *)(param_2 + 0x30) + (ulong)uVar8 * 2) = local_68[0];
            *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
          }
          else if ((local_68[0] == 0) && (uVar8 + 1 == (uint)*(ushort *)(param_2 + 0x50))) {
            *(ushort *)(param_2 + 0x52) = uVar8 + 1;
            *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar8 * 2) = 0;
          }
        }
      }
      uVar8 = puVar6[2];
      if (0x10f < uVar8) break;
      if ((uVar8 != 0x10a) && (uVar8 != 0x10b)) goto LAB_0109c464;
LAB_0109c478:
      puVar6 = (ushort *)FUN_0109cbdc(param_1,param_2,puVar6,param_4 & 1,param_5 & 1);
      param_5 = 0;
    }
    if (uVar8 == 0x114) {
      puVar7 = puVar6 + 1;
      puVar6 = puVar6 + (ulong)*puVar7 + 2;
      uVar8 = 0x10;
      while( true ) {
        if (*(char *)(param_2 + 0x54) != '\0') {
          uVar1 = *(ushort *)(param_2 + 0x52);
          if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
            *(ushort *)(param_2 + 0x52) = uVar1 + 1;
            *(ushort *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 2) = uVar8;
            *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
          }
          else if ((uVar8 == 0) && (uVar1 + 1 == (uint)*(ushort *)(param_2 + 0x50))) {
            *(ushort *)(param_2 + 0x52) = uVar1 + 1;
            *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 2) = 0;
          }
        }
        if (puVar6 <= puVar7) break;
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      }
    }
    else {
      if (uVar8 == 0x110) goto LAB_0109c478;
LAB_0109c464:
      if (((uVar8 >> 8) - 1 & 0xff) < 2) goto LAB_0109c478;
      if (uVar8 == 0x1900) {
        puVar6 = (ushort *)FUN_0109e404(param_1,param_2);
      }
      else {
        uVar1 = uVar8 & 0xff00;
        if (uVar1 == 0x1100) {
          puVar6 = (ushort *)FUN_0109e650(param_1,param_2);
        }
        else if (((uVar8 >> 8) - 0x11 & 0xff) < 8) {
          puVar6 = (ushort *)FUN_0109e830(param_1,param_2);
        }
        else if (uVar1 == 0x1000) {
          cVar3 = FUN_0109e33c(puVar6);
          param_5 = cVar3 == '\x03';
          puVar6 = (ushort *)FUN_0109e358(puVar6,param_1 + 0xd4,param_1 + 0xdc);
        }
        else if (uVar1 == 0x6400) {
          puVar6 = (ushort *)FUN_0109e578(param_1,param_2);
        }
        else {
          puVar7 = puVar6 + 1;
          puVar6 = puVar6 + (ulong)*puVar7 + 2;
          local_64[0] = 0x10;
          while( true ) {
            if ((param_5 & 1) == 0) {
              param_5 = 0;
            }
            else {
              param_5 = 1;
              if ((local_64[0] != 0x1b) && (9 < local_64[0] - 0x11)) {
                if (((*PTR_DAT_047d8c98 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar4 != 0)) {
                  FUN_00100190(PTR_LAB_047dae08,puVar2,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d8c98);
                }
                uVar5 = *(undefined8 *)puVar2;
                *(undefined8 *)PTR_DAT_047d8ca8 = uVar5;
                FUN_021722d4(uVar5,local_64);
                param_5 = 0;
              }
            }
            if (*(char *)(param_2 + 0x54) != '\0') {
              uVar8 = *(ushort *)(param_2 + 0x52);
              if (uVar8 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
                *(ushort *)(param_2 + 0x52) = uVar8 + 1;
                *(ushort *)(*(long *)(param_2 + 0x30) + (ulong)uVar8 * 2) = local_64[0];
                *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2)
                     = 0;
              }
              else if ((local_64[0] == 0) && (uVar8 + 1 == (uint)*(ushort *)(param_2 + 0x50))) {
                *(ushort *)(param_2 + 0x52) = uVar8 + 1;
                *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar8 * 2) = 0;
              }
            }
            if (puVar6 <= puVar7) break;
            local_64[0] = *puVar7;
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
  } while( true );
}


