/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0340211c; name: FUN_0340211c
 */


int FUN_0340211c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ushort *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong __n;
  
  puVar4 = PTR_DAT_047e2fd0;
LAB_0340215c:
  do {
    if (*(int *)(param_2 + 4) == 0) {
      bVar2 = *(byte *)((long)param_2 + 0x42);
      if ((bVar2 & 1) != 0) {
        return 0x11;
      }
      if ((bVar2 & 0x38) == 0x10) {
        *(byte *)((long)param_2 + 0x42) = bVar2 & 0xdf | 0x18;
      }
      else {
        (**(code **)(*(long *)*param_2 + 0x90))();
      }
      iVar5 = FUN_034d9a00(param_2);
      if (iVar5 != 0x2d) {
        return iVar5;
      }
    }
    uVar8 = *(uint *)(param_1 + 0xc4);
    uVar9 = (ulong)uVar8;
    if (uVar8 < 2) {
      if (*(uint *)(param_2 + 4) != 0) {
        uVar10 = 2 - uVar9;
        if (*(uint *)(param_2 + 4) < uVar10) {
          uVar10 = 1;
        }
        __n = uVar10 & 0xffffffff;
        if (__n == 2) {
          *(undefined8 *)(param_1 + 0xb8) = param_2[3];
        }
        else {
          if (*(char *)(param_1 + 0xda) == '\0') {
            lVar6 = (**(code **)(puVar4 + 0x18))(5,(ulong)*(ushort *)(param_1 + 0x8c) + 2,8);
            *(long *)(param_1 + 0xb8) = lVar6;
            if (lVar6 == 0) {
              return 0x34;
            }
            uVar9 = (ulong)*(uint *)(param_1 + 0xc4);
            *(undefined1 *)(param_1 + 0xda) = 1;
          }
          else {
            lVar6 = *(long *)(param_1 + 0xb8);
          }
          memcpy((void *)(lVar6 + uVar9),(void *)param_2[3],__n);
          uVar8 = *(uint *)(param_1 + 0xc4);
        }
        iVar5 = (int)uVar10;
        *(uint *)(param_1 + 0xc4) = uVar8 + iVar5;
        param_2[3] = param_2[3] + __n;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) - iVar5;
        *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + iVar5;
        if (*(int *)(param_1 + 0xc4) == 2) goto LAB_03402264;
        goto LAB_0340215c;
      }
    }
    else {
LAB_03402264:
      uVar8 = *(uint *)(param_1 + 0xc0);
      if (uVar8 == 0) {
        puVar7 = *(ushort **)(param_1 + 0xb8);
        if ((*(uint *)(param_2 + 4) < *puVar7 + 8) && (*(char *)(param_1 + 0xda) == '\0')) {
          puVar7 = (ushort *)(**(code **)(puVar4 + 0x18))(5,(ulong)*puVar7 + 10,8);
          if (puVar7 == (ushort *)0x0) {
            return 0x34;
          }
          *puVar7 = **(ushort **)(param_1 + 0xb8);
          uVar8 = *(uint *)(param_1 + 0xc0);
          *(ushort **)(param_1 + 0xb8) = puVar7;
          *(undefined1 *)(param_1 + 0xda) = 1;
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        puVar7 = *(ushort **)(param_1 + 0xb8);
      }
      if ((uVar8 < *puVar7) && (uVar1 = *(uint *)(param_2 + 4), uVar1 != 0)) {
        uVar3 = *puVar7 - uVar8;
        if (uVar3 <= uVar1) {
          uVar1 = uVar3;
        }
        if (*(char *)(param_1 + 0xda) != '\0') {
          memcpy((void *)((long)puVar7 + (ulong)uVar8 + 2),(void *)param_2[3],(ulong)uVar1);
          uVar8 = *(uint *)(param_1 + 0xc0);
        }
        *(uint *)(param_1 + 0xc0) = uVar8 + uVar1;
        param_2[3] = param_2[3] + (ulong)uVar1;
        *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) - uVar1;
        *(uint *)(param_2 + 5) = *(int *)(param_2 + 5) + uVar1;
      }
    }
    if ((*(int *)(param_1 + 0xc4) == 2) &&
       (*(uint *)(param_1 + 0xc0) == (uint)**(ushort **)(param_1 + 0xb8))) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      return 0x2d;
    }
  } while( true );
}


